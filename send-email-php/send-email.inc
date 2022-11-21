<?php
    require 'vendor/autoload.php';

    $name = "$fname $lname";
    $send_email = new \SendGrid\Mail\Mail();
    $send_email -> setFrom("brian060904@gmail.com", "Bao Nguyen Web");
    $send_email -> setSubject("$subject");
    $send_email -> addTo("linpao.nth@gmail.com", "Bao Nguyen");
    $send_email -> addContent($email_message);

    $sendgrid = new \SendGrid(getenv("SENDGRID_API_KEY"));

    $response = $sendgrid -> send($send_email);
?>