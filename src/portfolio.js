/* Change this file to get your personal Portfolio */

// To change portfolio colors globally go to the  _globalColor.scss file

import emoji from "react-easy-emoji";
import splashAnimation from "./assets/lottie/splashAnimation"; // Rename to your file name for custom animation

// Splash Screen

const splashScreen = {
  enabled: true, // set false to disable splash screen
  animation: splashAnimation,
  duration: 2000 // Set animation duration as per your animation
};

// Summary And Greeting Section

const illustration = {
  animated: true // Set to false to use static SVG
};

const greeting = {
  username: "Omar Garcia",
  title: "Hi all, I'm Omar Garcia",
  subTitle: emoji(
    "A passionate IT Professional, Computer Science Graduate, and a Full Stack Software Developer 🚀 having an experience of building Web,Mobile, and backend applications with Java/ Python/ JavaScript / Reactjs / Nodejs / React Native and some other cool libraries and frameworks. This very portfolio is served from an AWS EC2 Ubuntu instance fronted by Nginx, built with React and Node, and delivered over HTTPS with Let’s Encrypt—giving me full-stack control from code to cloud."
  ),
  resumeLink:
    "https://docs.google.com/document/d/1Cg-X-n88zRp-oLpwjpaMMOJLFuvih6cg/edit?usp=drive_link&ouid=117206428820309688680&rtpof=true&sd=true", // Set to empty to hide the button
  displayGreeting: true // Set false to hide this section, defaults to true
};

// Social Media Links

const socialMediaLinks = {
  github: "https://github.com/ogarcia138",
  linkedin: "https://www.linkedin.com/in/omar-garcia-ba4694184/",
  gmail: "omgarci56@gmail.com",
  //gitlab: "https://gitlab.com/saadpasta",
  facebook: "https://www.facebook.com/og47sr20",
  //medium: "https://medium.com/@saadpasta",
 // stackoverflow: "https://stackoverflow.com/users/10422806/saad-pasta",
  // Instagram, Twitter and Kaggle are also supported in the links!
  // To customize icons and social links, tweak src/components/SocialMedia
  display: true // Set true to display this section, defaults to false
};

// Skills Section

const skillsSection = {
  title: "What I do",
  subTitle: "FULL STACK DEVELOPER WHO WANTS TO EXPLORE EVERY TECH STACK",
  skills: [
    emoji(
      "⚡ Develop highly interactive Front end / User Interfaces for your web and mobile applications"
    ),
    emoji("⚡ Progressive Web Applications ( PWA ) in normal and SPA Stacks"),
    emoji(
      "⚡ Integration of third party services such as Firebase/ AWS / Digital Ocean"
    )
  ],

  /* Make Sure to include correct Font Awesome Classname to view your icon
https://fontawesome.com/icons?d=gallery */

  softwareSkills: [
    {
      skillName: "html-5",
      fontAwesomeClassname: "fab fa-html5"
    },
    {
      skillName: "css3",
      fontAwesomeClassname: "fab fa-css3-alt"
    },
    {
      skillName: "sass",
      fontAwesomeClassname: "fab fa-sass"
    },
    {
      skillName: "JavaScript",
      fontAwesomeClassname: "fab fa-js"
    },
    {
      skillName: "reactjs",
      fontAwesomeClassname: "fab fa-react"
    },
    {
      skillName: "nodejs",
      fontAwesomeClassname: "fab fa-node"
    },
    {
      skillName: "swift",
      fontAwesomeClassname: "fab fa-swift"
    },
    {
      skillName: "npm",
      fontAwesomeClassname: "fab fa-npm"
    },
    {
      skillName: "sql-database",
      fontAwesomeClassname: "fas fa-database"
    },
    {
      skillName: "aws",
      fontAwesomeClassname: "fab fa-aws"
    },
    {
      skillName: "firebase",
      fontAwesomeClassname: "fas fa-fire"
    },
     {
      skillName: "java",
      fontAwesomeClassname: "fab fa-java"
    },
    {
      skillName: "python",
      fontAwesomeClassname: "fab fa-python"
    },
    {
      skillName: "docker",
      fontAwesomeClassname: "fab fa-docker"
    }
  ],
  display: true // Set false to hide this section, defaults to true
};

// Education Section

const educationInfo = {
  display: true, // Set false to hide this section, defaults to true
  schools: [
    {
      schoolName: "California State University, Dominguez Hills",
      logo: require("./assets/images/csudhLogo.png"),
      subHeader: "Bachelors of Science in Computer Science",
      duration: "September 2022 - May 2025",
      desc: "Participated in the breast cancer research using Machine Learning Algorithms",
      descBullets: [
        "Breast Cancer Prognosis: Machine Learning Survival Prediction",
        "Predicting Crypto Market Trends Using Machine Learning Models",
        "Key coursework: Data Structures & Algorithms, Operating Systems, Software Engineering, AI & ML, Cloud Computing",
        "Tools & tech: Java • Python • React • Node • AWS • Docker • Git/GitHub • Linux",
      ]
    },
    {
      schoolName: "East Los Angeles College",
      logo: require("./assets/images/elacLogo.jpg"),
      subHeader: "Associates in Arts in Computer Science \n Associates in Arts in Mathematics \n Associates in Arts General Studies: Social and Behavioral Sciences",
      duration: "September 2017 - December 2021",
      desc: "Ranked top 10% in the program. Took courses about Software Engineering, Web Security, Operating Systems, ...",
      descBullets: ["Learned invaluable problem solving skills"]
    }
  ]
};

// Your top 3 proficient stacks/tech experience

const techStack = {
  viewSkillBars: true, //Set it to true to show Proficiency Section
  experience: [
    {
      Stack: "Frontend/Design", //Insert stack or technology you have experience in
      progressPercentage: "90%" //Insert relative proficiency in percentage
    },
    {
      Stack: "Backend",
      progressPercentage: "70%"
    },
    {
      Stack: "Programming",
      progressPercentage: "60%"
    }
  ],
  displayCodersrank: false // Set true to display codersrank badges section need to changes your username in src/containers/skillProgress/skillProgress.js:17:62, defaults to false
};

// Work experience section

const workExperiences = {
  display: true, //Set it to true to show workExperiences Section
  experience: [
    {
      role: "Student Professional Worker Information Technology",
      company: "Agricultural Commissioner Weights and Measures",
      companylogo: require("./assets/images/acwmLogo.png"),
      date: "March 2024 – Present",
      desc: "Performs a wide-range of technical support duties including configuration of computers, printers, and installation of equipment and applications software, simple maintenance and repair of computers and printers, and identification and resolution of computer hardware and software problems.",
      descBullets: [
        "Creates, modifies, or maintains simple applications/databases for data, such as training information, budget or departmental data as needed",
        "Participates in preparing detailed coding instructions using COBOL or other higher-level computer programming languages as need."
      ]
    },
    {
      role: "Sales Associate/Freight Associate",
      company: "The Home Depot",
      companylogo: require("./assets/images/hdLogo.png"),
      date: "May 2016- Current",
      desc: "Provide fast friendly service by actively seeking out customers and assessing their needs and provide assistance.Apply Product Knowledge to better inform customers on the product we sell.Greet Engage and Thank customers for their business. Operate forklifts and perform critical functions for maintaining proper on-hands and pricing for our customers."
    },
    {
      role: "Operations Supervisor",
      company: "United Parcel Service",
      companylogo: require("./assets/images/upsLogo.jpg"),
      date: "Sept 2008 – Jan 2015",
      desc: "Impacts the organization by contributing to the continued growth and profitability of UPS by maintaining the highest standards for account productivity, accuracy, customer service, organization, communication, cooperation, and safety."
    }
  ]
};

/* Your Open Source Section to View Your Github Pinned Projects
To know how to get github key look at readme.md */

const openSource = {
  showGithubProfile: "true", // Set true or false to show Contact profile using Github, defaults to true
  display: false // Set false to hide this section, defaults to true
};

// Some big projects you have worked on

const bigProjects = {
  title: "Big Projects",
  subtitle: "Real World Projects and University Projects based on Machine Learning Algorithms",
  projects: [
    {
      image: require("./assets/images/acwmLogo.png"),
      projectName: "Windows 11 Autopilot Rollout",
      projectDesc: "Automated the zero-touch, in-place upgrade of county workstations to Windows 11 using Microsoft Intune Autopilot, slashing deployment time while enforcing standardized, policy-compliant device provisioning",
      footerLink: [
        {
          name: "Visit Website",
          url: "https://acwm.lacounty.gov/"
        }
      ]
    },
    {
      image: require("./assets/images/aiCampusLogo.png"),
      projectName: "Breast Cancer Prognosis: Machine Learning Survival Prediction",
      projectDesc: "This study aims to develop a binary classification model to predict breast cancer survival effectively, influencing clinical decisions significantly.",
      footerLink: [
        {
          name: "Visit Website",
          url: "https://cedars.nationalcampus.ai/project/31/"
        }
        //  you can add extra buttons here.
      ]
    },
    {
      image: require("./assets/images/cryptoLogo.png"),
      projectName: "Predicting Crypto Market Trends Using Machine Learning Models",
      projectDesc: "Leverages machine learning models to perform binary classification on social media content predicting whether cryptocurrency prices will rise or fall within a specified timeframe",
      footerLink: [
        {
          name: "Visit Website",
          url: "https://github.com/ogarcia138/predictingCryptoMarketTrends-"
        }
      ]
    }
  ],
  display: true // Set false to hide this section, defaults to true
};

// Achievement Section
// Include certificates, talks etc

const achievementSection = {
  title: emoji("Achievements And Certifications 🏆 "),
  subtitle:
    "Achievements, Certifications, Award Letters and Some Cool Stuff that I have done !",

  achievementsCards: [
    {
      title: "Associates in Arts Degrees",
      subtitle:
        "Attained my AA in Computer Science, Mathematics, and General Studies",
      image: require("./assets/images/elacLogo2.png"),
      imageAlt: "ELAC Husky",
      footerLink: [
        {
          name: "Degrees",
          url: "https://drive.google.com/file/d/1nl5e9zIs-LANyIWIR7HI3ezahNL1D8ja/view?usp=sharing"
         }
        // {
        //   name: "Award Letter",
        //   url: "https://drive.google.com/file/d/0B7kazrtMwm5dekxBTW5hQkg2WXUyR3QzQmR0VERiLXlGRVdF/view?usp=sharing"
        // },
        // {
        //   name: "Google Code-in Blog",
        //   url: "https://opensource.googleblog.com/2019/01/google-code-in-2018-winners.html"
        // }
      ]
    },
    {
      title: "Bachelors of Science in Computer Science",
      subtitle:
        "Completed a B.S. in Computer Science with a focus on full-stack development, data science, and cloud technologies, graduated May 2025 with honors.",
      descBullets: [
        "Senior Project: Cancer-genomics ML pipeline—RNA-Seq preprocessing, survival XGBoost, SHAP interpretation",
        "Key coursework: Data Structures & Algorithms, Operating Systems, Software Engineering, AI & ML, Cloud Computing",
        "Tools & tech: Java • Python • React • Node • AWS • Docker • Git/GitHub • Linux",
        "CSUDH ACM chapter Workshop presenter & hackathon volunteer",
        "Graduated magna cum laude (GPA 3.8/4.0)"
],
        image: require("./assets/images/csudhLogo2.png"),
      imageAlt: "CSUDH Toro Logo",
      footerLink: [
        {
          name: "View Bachelors Degree",
          url: ""
        }
      ]
    },

    {
      title: "Home Depot Bravo's",
      subtitle: "Excellent Customer Service Badges",
      image: require("./assets/images/hdLogo.png"),
      imageAlt: "Home Depot Logo",
      footerLink: [
        {name: "Awards", url: "https://drive.google.com/file/d/1d0KJqUT9sFpKTtR7H8mbGyW6OEzqUYwk/view?usp=sharing"},
        // {
        //   name: "Final Project",
        //   url: "https://pakistan-olx-1.firebaseapp.com/"
        // }
      ]
    },
    {
      title: "AWS Certified Cloud Practitioner",
      subtitle: "Completed Certification from AWS",
      image: require("./assets/images/awsLogo.jpg"),
      imageAlt: "AWS Logo",
      footerLink: [
        {name: "Certification", url: "https://drive.google.com/file/d/1Pn-G3jQnmZ8iFTuGBpr6Y0P-32euYaAv/view?usp=sharing"},
        // {
        //   name: "Final Project",
        //   url: "https://pakistan-olx-1.firebaseapp.com/"
        // }
      ]
    }
  ],
  display: true // Set false to hide this section, defaults to true
};

// Blogs Section

const blogSection = {
  title: "Blogs",
  subtitle:
    "With Love for Developing cool stuff, I love to write and teach others what I have learnt.",
  displayMediumBlogs: "true", // Set true to display fetched medium blogs instead of hardcoded ones
  blogs: [
    {
      url: "https://blog.usejournal.com/create-a-google-assistant-action-and-win-a-google-t-shirt-and-cloud-credits-4a8d86d76eae",
      title: "Win a Google Assistant Tshirt and $200 in Google Cloud Credits",
      description:
        "Do you want to win $200 and Google Assistant Tshirt by creating a Google Assistant Action in less then 30 min?"
    },
    {
      url: "https://medium.com/@saadpasta/why-react-is-the-best-5a97563f423e",
      title: "Why REACT is The Best?",
      description:
        "React is a JavaScript library for building User Interface. It is maintained by Facebook and a community of individual developers and companies."
    }
  ],
  display: false // Set false to hide this section, defaults to true
};

// Talks Sections

const talkSection = {
  title: "TALKS",
  subtitle: emoji(
    "I LOVE TO SHARE MY LIMITED KNOWLEDGE AND GET A SPEAKER BADGE 😅"
  ),

  talks: [
    {
      title: "Build Actions For Google Assistant",
      subtitle: "Codelab at GDG DevFest Karachi 2019",
      slides_url: "https://bit.ly/saadpasta-slides",
      event_url: "https://www.facebook.com/events/2339906106275053/"
    }
  ],
  display: false // Set false to hide this section, defaults to true
};

// Podcast Section

const podcastSection = {
  title: emoji("Twitch 🎮"),
  subtitle: "I LOVE TO TALK ABOUT GAMING, MYSELF AND TECHNOLOGY",

  // Please Provide with Your Podcast embeded Link
  podcast: [
    "https://player.twitch.tv/?channel=paraphernilia"
    + "&parent=localhost" 
    + "&parent=omargarcia.dev"
  ],
  display: true // Set false to hide this section, defaults to true
};

// Resume Section
const resumeSection = {
  title: "Resume",
  subtitle: "Feel free to download my resume",

  // Please Provide with Your Podcast embeded Link
  podcast: [
    "https://docs.google.com/document/d/1Cg-X-n88zRp-oLpwjpaMMOJLFuvih6cg/edit?usp=drive_link&ouid=117206428820309688680&rtpof=true&sd=true"
  ],
  display: true // Set false to hide this section, defaults to true
};

const contactInfo = {
  title: emoji("Contact Me ☎️"),
  subtitle:
    "Discuss a project or just want to say hi? My Inbox is open for all.",
  number: "1(323)691-6222",
  email_address: "omgarci56@gmail.com"
};

// Twitter Section

const twitterDetails = {
  userName: "N/A", //Replace "twitter" with your twitter username without @
  display: false // Set true to display this section, defaults to false
};

const isHireable = true; // Set false if you are not looking for a job. Also isHireable will be display as Open for opportunities: Yes/No in the GitHub footer

export {
  illustration,
  greeting,
  socialMediaLinks,
  splashScreen,
  skillsSection,
  educationInfo,
  techStack,
  workExperiences,
  openSource,
  bigProjects,
  achievementSection,
  blogSection,
  talkSection,
  podcastSection,
  contactInfo,
  twitterDetails,
  isHireable,
  resumeSection
};
