/*Author: Omar Garcia
**Date: 04/14/25
**Purpose: Assignment 2 Writing a Surface Shader in RSL
** Implements five BRDF modes:
** 1-diffuse only
** 2-specular only (Blinn-Phong using H)
** 3-specular only (Phong using R)
** 4-plastic (diffuse + specular using H)
** 5-plastic (diffuse + specular using R)
**Parameters 
*/
 //helper functions
    //1.Cosine-weighted diffuse BRDF (Lambert)
    color diffuseBRDF()
    {
        /*p/π - p is baked into diffuse color in the main loop*/
        return 1/PI; 
    }
     //2.Specular BRDF (returns the non-coloured lobe)
    float specularBRDF(vector V; vector L; normal Nf; float rough; float useR)
    {
        //normalize inputs
        vector Ln = normalize(L);
        vector Vn = normalize(V);

        //convert roughness in [0,1]-> Phong/Blinn exponent
        float m = clamp(rough, 1.0e-4, 1);
        float exponent = (2/(m*m))-2;

        float cosTheta = 0;

        //Phong with reflection R
        if(useR != 0){
            vector R = 2*(Ln . Nf) * Nf - Ln;
            cosTheta = max(0, normalize(R) . Vn);

        }
        else {
            vector H = normalize(Ln + Vn);
            cosTheta = max(0, H . Nf);
            //Blinn exponent needs a tweak so the width matches Phong
            exponent *= 4;
        }
        return pow(cosTheta, exponent) * (exponent+2)/(2*PI);
    }
     //3.Plastic BRDF = diffuse + specular
    color plasticBRDF(vector V; vector L; normal Nf; float rough; color Kd; color Ks; float useR)
    {
        return Kd * diffuseBRDF() + Ks * specularBRDF(V, L, Nf, rough, useR);
    }
surface asg2shader (float model = 5.0; float roughness = 0.02; color specularcolor = 1; color diffusecolor = 0.5;)
{
    normal Nf = faceforward(normalize(N), I);
    vector V  = -normalize(I);

    color total_reflectance = 0;

    illuminance (P, Nf, PI/2)
    {
        float Ndl = normalize(L) . Nf;
        if (Ndl <= 0) 
        {
        color f = 0;

        if      (model == 1)
            f = diffusecolor * diffuseBRDF();
        else if (model == 2)
            f = specularcolor *
                specularBRDF(V, L, Nf, roughness, 0);
        else if (model == 3)
            f = specularcolor *
                specularBRDF(V, L, Nf, roughness, 1);
        else if (model == 4)
            f = plasticBRDF(V, L, Nf,
                            roughness, diffusecolor,
                            specularcolor, 0);
        else
            f = plasticBRDF(V, L, Nf,
                            roughness, diffusecolor,
                            specularcolor, 1);

        total_reflectance += Cl * f * Ndl;
        }
    }

    Ci = total_reflectance;
    Oi = Os;
}
