<!doctype html>
<html data-theme="light" lang="en">

<body>

    <?php
        require_once "../settings.php";
        $conn = mysqli_connect($MYSQL_HOST, $MYSQL_USER, $MYSQL_PWD, $MYSQL_DB);
        $id = $_POST['customer_id'];
        $query = "DELETE FROM Customers WHERE customer_id=$id";
        $result = mysqli_query($conn, $query);
        header("Location: manager.php");
    ?>

</body>
</html>
