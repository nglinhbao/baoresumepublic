<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8" />
    <meta name="description" content="Personal Website" />
    <meta name="keywords" content="PHP, Mysql" />
    <title>Manager</title>
    <link href="../styles/style.css" rel="stylesheet"/>
    <link rel="preconnect" href="https://fonts.googleapis.com"> 
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin> 
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;600&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Anton&display=swap" rel="stylesheet">
</head>

<style>
    body {
        text-align: center;
    }

    .manager_form input[type="submit"] {
        width: 10%;
        margin-bottom: 30px;
    }

    input[type="image"] {
        width: 7%;
        height: 7%;
        margin: 0px;
        padding: 0px;
    }

    input {
        margin-top: 20px;
        margin-bottom: 20px;
    }
    
    table {
        border-collapse: collapse;
        width: 70%;
        align-items: center;
        margin-left: auto;
        margin-right: auto;
    }

    table td, table th {
        color: black;
        border: 1px solid #ddd;
        padding: 8px;
    }

    table tr {
        background-color: white;
    }

    table tr:nth-child(even) {
        background-color: #f2f2f2;
    }

    table tr:hover {
        background-color: #ddd;
    }

    table th {
        padding-top: 12px;
        padding-bottom: 12px;
        background-color: #f4ea37;
    }

    img {
        width: 10%;
        height: auto;
    }

    .invisible {
        visibility: hidden;
        display: none;
    }

</style>

<body>

    <h1 style='color: yellow; font-size: 3em; font-weight: bolder;'>Manager site</h1>

    <form action="manager.php" class="manager_form" method="post">

        <label>Search by subject<span class="required"></span></label>
        <select name="subject" class="field-select">
            <option value="default" selected>Show all</option>
            <option value="General">General</option>
            <option value="Partnership">Partnership</option>
            <option value="Other">Other</option>
        </select>

        <br>

        <label for="message">With message</label> 
        <input type="radio" id="message" name="radio" value="message"/> 
        <br>
        <label for="no_message">Without message</label> 
        <input type="radio" id="no_message" name="radio" value="no_message"/> 
        <br>
        <label for="both">Both</label> 
        <input type="radio" id="both" name="radio" value="both" checked="checked"/> 
        <br>
    
        <input type="submit" class="search" value="Search"/>

    </form>
    
    <?php
        require_once "../settings.php";
        $conn = mysqli_connect($MYSQL_HOST, $MYSQL_USER, $MYSQL_PWD, $MYSQL_DB);

        if (isset($_POST["subject"])) {
            $subject = trim($_POST["subject"]);
            $query = "SELECT * FROM Customers";

            if ($_POST["radio"] == "message") {
                $query .= " WHERE message <> ''";
            }
            elseif ($_POST["radio"] == "no_message") {
                $query .= " WHERE message = ''";
            }

            if ($subject != "default") {
                if (strlen($query) != 23) {
                    $query .= " AND";
                }
                else {
                    $query .= " WHERE";
                }
                if ($subject == "General") {
                    $query .= " subject = 'General'";
                }
                if ($subject == "Partnership") {
                    $query .= " subject = 'Partnership'";
                }
                if ($subject == "Other") {
                    $query .= " subject = 'Other'";
                }
            } 
        }
        else {
            $query = "SELECT * FROM Customers";
        }

        

        if ($conn) {
            $result = mysqli_query($conn, $query);

            if ($result) {
                $record = mysqli_fetch_assoc($result);
                if ($record) {
                    echo "<table>";
                    echo "<tr><th>ID</th><th>First Name</th><th>Last Name</th><th>Email</th><th>Subject</th><th>Message</th><th>Delete data</th></tr>";
                    while ($record) {
                        echo "<tr>";
                        echo "<td>{$record['customer_id']}</td>";
                        $customer_id = $record['customer_id'];
                        echo "<td>{$record['fname']}</td>";
                        echo "<td>{$record['lname']}</td>";
                        echo "<td>{$record['email']}</td>";
                        echo "<td>{$record['subject']}</td>";
                        echo "<td>{$record['message']}</td>";
                        echo "<td>
                            <form action='delete.php' class='delete_form' method='post'>
                            <input type='text' name='customer_id' class='invisible' value='$customer_id'/>
                            <input type='image' src='../images/delete.png' alt='delete'/>
                            </form>
                        </td>";
                        echo "</tr>";
                        $record = mysqli_fetch_assoc($result);
                    }
                    echo "</table>";
                    mysqli_free_result($result);
                }
            }
            else {
                echo "<p>No record in the Customers Table.</p>";
            }
        }
        else {
            echo "<p>Connect Unsuccessfully</p>";
        }

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