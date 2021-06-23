<?php
/**
 * Localizations for the Kolab 2-Factor-Auth plugin
 *
 * Copyright (C) 2015, Kolab Systems AG
 *
 * For translation see https://www.transifex.com/projects/p/kolab/resource/kolab_2fa/
 */
$labels['factor'] = 'Faktor';
$labels['secret'] = 'Tajný klíč';
$labels['created'] = 'Vytvořeno';
$labels['remove'] = 'Odstranit';
$labels['continue'] = 'Pokračovat';

$labels['settingslist'] = 'Multifaktorová autentizace';
$labels['settingstitle'] = 'Autentizační faktory';

$labels['totp'] = 'Mobilní appka (TOTP)';
$labels['hotp'] = 'Mobilní appka (HOTP)';
$labels['yubikey'] = 'Yubikey';

$labels['or'] = 'anebo';
$labels['yes'] = 'ano';
$labels['no'] = 'ne';

$labels['label'] = 'Název';

$labels['qrcode'] = 'QR kód';
$labels['showqrcode'] = 'Ukázat QR kód';
$labels['qrcodeexplaintotp'] = 'Stáhni si autentizační appku na svůj telefon. Dobře fungují appky <strong>FreeOTP</strong> a <strong>Google Authenticator</strong>, ale fungovat by měla i jakákoliv jiná TOTP appka.<br/><br/>
Spusť appku na svém telefonu a přidej novou položku pro tuto službu. Pak si naskenuj níže zobrazený QR kód - až budeš k tomu vyzván. Tím dojde ke konfiguraci Tvé mobilní appky.';
$labels['qrcodeexplainhotp'] = 'Stáhni si autentizační appku na svůj telefon. Dobře fungují appka <strong>Google Authenticator</strong>, ale fungovat by měla i jakákoliv jiná HOTP appka.<br/><br/>
Spusť appku na svém telefonu a přidej novou položku pro tuto službu. Pak si naskenuj níže zobrazený QR kód - až budeš k tomu vyzván. Tím dojde ke konfiguraci Tvé mobilní appky.';

$labels['yubikeyid'] = 'ID Tvého YubiKey';
$labels['yubikeyidexplainyubikey'] = 'Jednou stiskni tlačítko na svém YubiKey a pak submitni vygenerovaný kód';

$labels['addfactor'] = 'Přidat autentizační faktor';
$labels['testfactor'] = 'Ostestovat tento faktor';
$labels['verifycode'] = 'Verifikovat kód';
$labels['verifycodeexplaintotp'] = 'Po naskenování QR kódu zadej šestimístní verifikační kód, jenž vygenerovala autentizační appka.';
$labels['verifycodeexplainhotp'] = 'Po naskenování QR kódu zadej šestimístní verifikační kód, jenž vygenerovala autentizační appka.';

$labels['loginexpired'] = 'Žádost o přihlášení vypršela! Prosím, zkus to znovu.';
$labels['authremoveconfirm'] = 'Opravdu chceš tento autentizační faktor ze svého účtu trvale odstranit?';
$labels['verifycodemissing'] = 'Zadej prosím verifikační kód z Tvého zařízení';

$labels['factorsavesuccess'] = 'Autentizační faktor uložen';
$labels['factorremovesuccess'] = 'Autentizační faktor odstraněn';
$labels['factorsaveerror'] = 'Nepodařilo se uložit nastavení autentizačního faktoru';
$labels['codeverificationpassed'] = 'Verifikace kódu pro $method se podařila';
$labels['codeverificationfailed'] = 'Verifikace kódu pro $method selhala';

$labels['highsecurityrequired'] = 'Vstupuješ do módu vysokého zabezpečení - požaduje se verifikace';
$labels['highsecuritydialog'] = 'Mód vysokého zabezpečení chrání Tvůj účet před bezpečnostními hrozbami - např. krádežemi sessionů. Ke vstupu do módu vysokého zabezpečení dolož svou identitu přihlášením se s přidaným autentizačním faktorem:';
$labels['enterhighsecurity'] = 'Potvrdit';
