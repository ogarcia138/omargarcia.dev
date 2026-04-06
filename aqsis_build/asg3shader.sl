// /* Author: Omar Garcia
// Date: 05/06/2025
// Purpose: ward_aniso.sl Ward Anisotropic BRDF Shader 
// */

//#define PI 3.141592653589793

surface asg3shader(
    float u_roughness = 0.1;
    float v_roughness = 0.1;
    color specular_color = color(1, 1, 1);
)
{
    normal surfNorm = normalize(N);
    vector viewDir = normalize(-I);
    vector tanU = normalize(dPdu);  
    vector tanV = normalize(N ^ tanU); 
    color accumColor = 0;

    illuminance(P, surfNorm, PI/2)
    {
        vector lightDir = normalize(L);
        vector halfVec = normalize(lightDir + viewDir);

        float NdotL = max(0, surfNorm . lightDir);
        float NdotV = max(0, surfNorm . viewDir);
        float NdotH = max(1e-5, surfNorm . halfVec);
        float HdotT = halfVec . tanU;
        float HdotB = halfVec . tanV;

        float exponent = - ( (HdotT*HdotT)/(u_roughness*u_roughness) +
                             (HdotB*HdotB)/(v_roughness*v_roughness) ) /
                             (NdotH * NdotH);

        float denom = 4 * PI * u_roughness * v_roughness *
                      sqrt(NdotL * NdotV);

        float D = exp(exponent) / denom;

        accumColor += specular_color * D * NdotL;
    }

    Ci = accumColor;
    Oi = Os;
}