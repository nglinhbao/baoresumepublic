<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8" />
    <meta name="description" content="Personal Website" />
    <meta name="keywords" content="PHP, Mysql" />
    <title>Bao's Resume</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="../styles/style.css" rel="stylesheet"/>
    <link rel="preconnect" href="https://fonts.googleapis.com"> 
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin> 
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;600&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Anton&display=swap" rel="stylesheet">
</head>

<body>
    <div class="wrapper">
        <?php
            include_once "header_reenter.inc";
        ?>

            <img id="my_photo" src="../images/Bao.png" alt="My photo">

        <script src=
            "https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js">
        </script>
        
        <!-- Script to change opacity when scrolling the web page -->
        <script>
            $(document).ready(function(){
                $(window).scroll(function(){
                    $('#my_photo').css("opacity", 0.5- $(window).scrollTop() / 1200)
                })
            })
        </script>

        <div id="introduction" class="introduction">
            <h1 class="intro">I<div class="yellow">'</div>M BAO<br>NGUYEN<div class="yellow">.</div></h1>
            <h2 class="intro_des">Software Developer and AI Engineer at<br>Swinburne University of Technology.</h2>
        </div>  

        <div class="content">

            <div class="box">
                <p>I'm currently an international student of Swinburne University of Technology, whose major is Software Development and Artificial Intelligence. I was a member of IT team in my high school, so I've participated in many competitive programming competitions since I was in grade 10. Therefore, I am confident about my logical thinking and technical programming aspects. With a great passion for Computer Science, I am studying with all my effort.</p>
                <form method="get" action="resume.pdf" target="_blank">
                    <button type="submit">DOWNLOAD RESUME</button>
                </form>
            </div>
            
            <div id="professional" class="section professional">
                <h1 class="heading"><div class="number">01&nbsp;&nbsp;</div>SPECIALTY</h1>
                <h2 class="heading_des">My knowledge in Computer Science.</h2>

                <p>Introduction To Programming</p>
                <div class="container">
                    <div class="skills cos10009">90%</div>
                </div>

                <p>Computer Systems</p>
                <div class="container">
                    <div class="skills cos10004">95%</div>
                </div>

                <p>Web Development</p>
                <div class="container">
                    <div class="skills cos10026">85%</div>
                </div>

                <p>Networks and Switching</p>
                <div class="container">
                    <div class="skills tne10006">80%</div>
                </div>

                <p>Machine Learning</p>
                <div class="container">
                    <div class="skills ml">50%</div>
                </div>

                <p>Algorithms</p>
                <div class="container">
                    <div class="skills algorithms">80%</div>
                </div>
            </div>

            <div id="portfolio" class="section portfolio">
                <h1 class="heading"><div class="number">02&nbsp;&nbsp;</div>PORTFOLIO</h1>
                <h1 class="heading_des big">MY WORK</h2>

                <script>
                    $(document).ready(function() {
                    $(window).scroll(function(){
                        $('.big').css("left", -2300 + $(window).scrollTop()*1, + "px;")
                    })
                    })
                </script>

                <div class="work">
                    <div class="portfolio_container portfolio1">
                        <div class="portfolio_content">
                            <h2>LinhBot Project</h2>
                            <p>An AI assistant that listen to human's voice and answer based on its knowledge. <br><a href="https://github.com/nglinhbao/linhbot.git" target="_blank">See more</a></p>
                        </div>
                    </div>

                    <div class="portfolio_container portfolio2">
                        <div class="portfolio_content">
                            <h2>4A1A Pizza Website</h2>
                            <p>A project of one of my unit at University. This is a website for displaying pizzas and ordering. I and my team members did both front-end and back-end sides for this website.<br><a href="https://github.com/minhpg/COS10026-Assignment-Project" target="_blank">See more</a></p>
                        </div>
                    </div>

                    <div class="portfolio_container portfolio3">
                        <div class="portfolio_content">
                            <h2>Music Player</h2>
                            <p>An app that I developed for my custom program of one of my unit. This app will take the music files in the system and create an user-friendly interface with many featuers.<br><a href="https://github.com/nglinhbao/musicplayer.git" target="_blank">See more</a></p>
                        </div>
                    </div>

                    <div class="portfolio_container portfolio4">
                        <div class="portfolio_content">
                            <h2>Machine Learning models</h2>
                            <p>These are 3 machine learning models, which are applied various machine learning algorithms including linear regression, decision tree, logistic regression.<br><a href="https://github.com/nglinhbao/machine_learning.git" target="_blank">See more</a></p>
                        </div>
                    </div>
                </div>
            </div>

            <div id="experience" class="section expenrience">
                <h1 class="heading"><div class="number">03&nbsp;&nbsp;</div>EXPERIENCE</h1>

                <div class="timeline">

                    <div class="timeline_container timeline_right">
                        <div class="timeline_content">
                            <h2 class="year_of_work">2018</h2>
                            <h2 class="org_name">MENARINI CORP</h2>
                            <p class="position"><i>VOLUNTARY PARTICIPANT</i></p>
                            <p class="position_description">Provide free daily supplies and moral support for poor villagers at Vinh Long province</p>
                        </div>
                    </div>    
                    
                    <div class="timeline_container timeline_left">
                        <div class="timeline_content">
                            <h2 class="year_of_work">2020</h2>
                            <h2 class="org_name">Nguyen Thuong Hien's IT team</h2>
                            <p class="position"><i>STUDENT</i></p>
                            <p class="position_description">A team/club of Nguyen Thuong Hien high school, where students study algorithms and apply the knowledge to competitive programming.</p>
                        </div>
                    </div>

                    <div class="timeline_container timeline_right">
                        <div class="timeline_content">
                            <h2 class="year_of_work">2020</h2>
                            <h2 class="org_name">THE DIGIBEET</h2>
                            <p class="position"><i>MEMBER OF TECHNICAL DEPARTMENT</i></p>
                            <p class="position_description">This project provided useful knowledge about Technology to young readers through a page on Facebook<ul><li>Compile raw materials for the upcoming posts of the project</li><li>Support the speakers during the event</li><li>Keep up to date with the latest news about technology and STEM</li><li>Check the products of Content Department</li></ul></p>
                        </div>
                    </div>

                    <div class="timeline_container timeline_left">
                        <div class="timeline_content">
                            <h2 class="year_of_work">2021</h2>
                            <h2 class="org_name">CS 201 – Introduction to Robotics with Vex IQ </h2>
                            <p class="position"><i>STUDENT</i></p>
                            <p class="position_description">A program of studying Robotics with well-trained experts. In this program I had the ability to apply knowledge of Mathematics, Physics/Mechanics, Cybernetics and Programming into designing and programming robots</p>
                        </div>
                    </div>

                </div>
            </div>

            <div id="contact" class="section contact">
                <h1 class="heading"><div class="number">04&nbsp;&nbsp;</div>CONTACT</h1>
                <p class="contact_des">If you are interested, please feel free to contact me via:<br><br>ngnglinhbao@gmail.com<br>(+61)424395642 or (+84)931609704<br><br>Or the form below</p>

                <form method="post" action="receive.php">
                    <ul class="form-style-1">
                        <li>
                            <label>Full Name <span class="required">*</span></label>
                            <input type="text" name="fname" class="field-divided" placeholder="First" />
                            <input type="text" name="lname" class="field-divided" placeholder="Last" />
                            <?php
                                if (!check_string($fname) or !check_string($lname)) {
                                    echo "<p style='color:red;'>Please enter a valid name</p>";
                                }
                            ?>
                        </li>
                        <li>
                            <label>Email <span class="required">*</span></label>
                            <input type="text" name="email" class="field-long"/>
                            <?php
                                if (!check_mail($email)) {
                                    echo "<p style='color:red;'>Please enter a valid email</p>";
                                }
                            ?>
                        </li>
                        <li>
                            <label>Subject <span class="required">*</span></label>
                            <select name="subject" class="field-select">
                                <option value="default" selected>Please select an option</option>
                                <option value="General">General</option>
                                <option value="Partnership">Partnership</option>
                                <option value="Other">Other</option>
                            </select>
                            <?php
                                if ($subject == "default") {
                                    echo "<p style='color:red;'>Please choose a subject</p>";
                                }
                            ?>
                        </li>
                        <li>
                            <label>Your Message</label>
                            <textarea name="message" id="field5" class="field-long field-textarea"></textarea>
                        </li>
                        <li>
                            <input type="submit" class="submit" value="Submit" />
                        </li>
                    </ul>
                </form>
            </div>

        </div>

        <footer>
            <div class="platform">
                <a href="https://www.facebook.com/nglinhbao/" target="_blank"><img src="../images/facebook.png" alt="Facebook"></a>
                <a href="https://www.instagram.com/nglinhbao/" target="_blank"><img src="../images/instagram.png" alt="Instagram"></a>
                <a href="https://www.linkedin.com/in/nglinhbao/" target="_blank"><img src="../images/linkedin.png" alt="LinkedIn"></a>
            </div>
            <p>This website's user interface does not support some specific devices</p>
            <p>&#169; 2022 by Bao Nguyen</p>
        </footer>
    </div>
</body>
</html>
