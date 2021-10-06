<?php

// SDK de Mercado Pago
require __DIR__ . '/vendor/autoload.php';

date_default_timezone_set('America/Mexico_City');

// $domain = 'http://mercadopago.test/';
$domain = 'http://christianmce.net/tiendacmce/';

// Agrega credenciales
MercadoPago\SDK::setAccessToken('APP_USR-1159009372558727-072921-8d0b9980c7494985a5abd19fbe921a3d-617633181');
MercadoPago\SDK::setIntegratorId('dev_24c65fb163bf11ea96500242ac130004');

$payer               = new MercadoPago\Payer();
$payer->name         = 'Lalo';
$payer->surname      = 'Landa';
$payer->email        = 'test_user_81131286@testuser.com';
$payer->phone        = [
    'area_code' => '011',
    'number'    => '2222-3333'
];
$payer->identification = [
    'type'   => 'DNI',
    'number' => '3934048546363976'
];

$payer->address = [
    'street_name'   => 'Solidaridad Las Vegas',
    'street_number' => '1',
    'zip_code'      => '30798'
];

// Crea un ítem en la preferencia
$item              = new MercadoPago\Item();
$item->id          = '1234';
$item->title       = $_POST['title'];
$item->description = 'Dispositivo móvil de Tienda e-commerce';
$item->picture_url = $domain . str_replace('./', '', $_POST['img']);
$item->quantity    = 1;
$item->currency_id = 'MXN';
$item->unit_price = $_POST['price'];

// Crea un objeto de preferencia
$preference                  = new MercadoPago\Preference();
$preference->payment_methods = [
    'excluded_payment_methods' => [
        ['id' => 'amex']
    ],
    'excluded_payment_types' => [
        ['id' => 'atm']
    ],
    'installments' => 6
];
$preference->external_reference = 'christianmce@gmail.com';
$preference->back_urls          = [
    'success' => $domain . 'response.php?mp_status=success',
    'failure' => $domain . 'response.php?mp_status=failure',
    'pending' => $domain . 'response.php?mp_status=pending'
];
$preference->auto_return = 'approved';
$preference->notification_url = $domain.'notification.php?source_news=webhooks';
$preference->items = [$item];
$preference->payer = $payer;
$preference->save();

?>

<!DOCTYPE html>
<html class="supports-animation supports-columns svg no-touch no-ie no-oldie no-ios supports-backdrop-filter as-mouseuser" lang="en-US"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
    <meta name="viewport" content="width=1024">
    <title>Tienda e-commerce</title>
