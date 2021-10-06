<?php

require '../vendor/autoload.php';

MercadoPago\SDK::setAccessToken('APP_USR-1159009372558727-072921-8d0b9980c7494985a5abd19fbe921a3d-617633181');

$handle = curl_init('http://christianmce.net/tiendacmce/webhooks.php');

$data = [
    'key' => 'value'
];

$encodedData = json_encode($data);

curl_setopt($handle, CURLOPT_POST, 1);
curl_setopt($handle, CURLOPT_POSTFIELDS, $encodedData);
curl_setopt($handle, CURLOPT_HTTPHEADER, ['Content-Type: application/json']);

$result = curl_exec($handle);

?>
