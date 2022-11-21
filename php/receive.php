<!doctype html>
<html data-theme="light" lang="en">

<body>

    <?php
        function check_string($string) {
            if (strlen($string)==0) {
                return false;
            }
            for ($i=0; $i < strlen($string); $i++) {
                if (ord($string[$i]) < 65 or (ord($string[$i]) > 90 and ord($string[$i]) < 97) or ord($string[$i]) > 122) {
                    return false;
                }
            }
            return true;
        }


        function check_mail($string) {
            if (strlen($string)==0) {
                return false;
            }
            $at = false;
            $email_char = array();
            for ($i=0; $i < strlen($string); $i++) {

                if ($string[$i] == "@") {
                    if ($at == true or $i == 0 or $i == strlen($string)-1) {
                        return false;
                    }
                    else {
                        $at = true;
                        if ($string[$i+1] == ".") {
                            return false;
                        }
                    }
                }

                elseif ($string[$i] == ".") {
                    if ($i == 0 or $i == strlen($string)-1) {
                        return false;
                    }
                    if ($string[$i-1] == "." or $string[$i+1] == ".") {
                        return false;
                    }
                }

                else {
                    if ((ord($string[$i]) >= 48 and ord($string[$i]) <= 57) or (ord($string[$i]) == 45) or (ord($string[$i]) == 95) or (ord($string[$i]) >= 97 and ord($string[$i]) <= 122) or (ord($string[$i]) >= 65 and ord($string[$i]) <= 90)) {}
                    else {
                        return false;
                    }
                }
            }
            return true;
        }


        if (isset($_POST["fname"])) {
            $fname = trim($_POST["fname"]);
        }
        else {
            header("Location: ../index.php");
            exit();
        }

        if (isset($_POST["lname"])) {
            $lname = trim($_POST["lname"]);
        }
        else {
            header("Location: ../index.php");
            exit();
        }

        if (isset($_POST["email"])) {
            $email = trim($_POST["email"]);
        }
        else {
            header("Location: ../index.php");
            exit();
        }

        if (isset($_POST["subject"])) {
            $subject = $_POST["subject"];
        }
        else {
            header("Location: ../index.php");
            exit();
        }

        if (isset($_POST["message"])) {
            $message = $_POST["message"];
        }
        else {
            $message = '';
        }

        if (check_string($fname) and check_string($lname) and check_mail($email) and $subject != "default") {
            $email_message = "From: $email\nName: $fname $lname.\nMessage: " . $message;
            include ('../send-email-php/send-email.php');
            include ('process.inc');
        }
        else {
            include ('homepage_reenter.inc');
        }
    ?>

</body>
</html>
