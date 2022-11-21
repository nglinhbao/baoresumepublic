<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8" />
    <meta name="description" content="Personal Website" />
    <meta name="keywords" content="PHP, Mysql" />
    <title>Bao's Resume</title>
    <link href="../styles/style.css" rel="stylesheet"/>
    <link rel="preconnect" href="https://fonts.googleapis.com"> 
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin> 
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;600&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Anton&display=swap" rel="stylesheet">
</head>

<body>
    
    <?php
        require_once "../settings.php";
        $conn = mysqli_connect($MYSQL_HOST, $MYSQL_USER, $MYSQL_PWD, $MYSQL_DB);
        if ($conn) {
            $create_query = "CREATE TABLE IF NOT EXISTS Customers (customer_id INT AUTO_INCREMENT PRIMARY KEY, fname VARCHAR(20), lname VARCHAR(20), email VARCHAR(100), subject VARCHAR(20), message VARCHAR(1000))";

            $create_result = mysqli_query($conn, $create_query);

            echo "<div style='text-align:center; font-size: 1.7em;'>";

            if ($create_result) {
                $insert_query = "INSERT INTO Customers(fname, lname, email, subject, message) VALUES ('$fname', '$lname', '$email', '$subject', '$message')";
                $insert_result = mysqli_query($conn, $insert_query);
                if ($insert_result) {
                    echo "<h1 style='color: yellow; font-size: 2.2em; font-weight: bolder;'>Thank you! <br>I will contact you soon.</h1>";
                    echo "<p>Name: ", $fname, " ", $lname, "</p>";
                    echo "<p>Email: ", $email, "</p>";
                    echo "<p>Subject: ", $subject, "</p>";
                    echo "<p>Message: ", $message, "</p>";
                }
                else {
                    echo "<p>Insert unsuccessfully</p>";
                }
            }
            else {
                echo "<p>Create unsuccessfully</p>";
            }
        }
        else {
            echo "<p>Connect unsuccessfully</p>";
        }
            
        echo "<br><a href='../index.php'>Return to homepage</a>";
        echo "</div>";
        mysqli_close($conn);
    ?>

    <footer>
        <div class="platform">
            <a href="https://www.facebook.com/nglinhbao/" target="_blank"><img src="../images/facebook.png" alt="Facebook"></a>
            <a href="https://www.instagram.com/nglinhbao/" target="_blank"><img src="../images/instagram.png" alt="Instagram"></a>
            <a href="https://www.linkedin.com/in/nglinhbao/" target="_blank"><img src="../images/linkedin.png" alt="LinkedIn"></a>
        </div>
        <p>&#169; 2022 by Bao Nguyen</p>
    </footer>

</body>
</html>