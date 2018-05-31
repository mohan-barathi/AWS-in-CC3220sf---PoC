/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----"
 * "...base64 data..."
 * "-----END CERTIFICATE-----";
 */
static const char clientcredentialCLIENT_CERTIFICATE_PEM[] = 
"-----BEGIN CERTIFICATE-----\n"
"MIIDWjCCAkKgAwIBAgIVALvoT7aLCl13j4UCzRubbnB6xW/XMA0GCSqGSIb3DQEB\n"
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xODA1MTAwNTIz\n"
"MzlaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDNM9NJ6P+cxzJwhVqZ\n"
"jLP7wBi1EupQyrctwwI4maNAMKiT+hOf+eyJYIZSP5XUquB3tuEhv+DfLlvumnkv\n"
"ul7Ku1sZNM9Prx2inf4uyirQ+TcAGqejfgkhCwxc5+4jQLe8GpPZUiS1NiUGOe6z\n"
"TXJxcxZp0RjYtJw1ywOIfephQfyNiIMeb8CSW7y5IdPLqYx8mkzA62rujAFT+BoI\n"
"A1MITW1IaCJQVpe0ZVaxI6Lc6XIXEMVG95ei3+U7BF0fhtGI83sbLOVgnoCTSgoD\n"
"e4xoT60iJQG5ieQ9NwuzszKq0j1vqe9bLwoURGQ7ypZC+z3luC8dVoRM7dKG5QZF\n"
"U88tAgMBAAGjYDBeMB8GA1UdIwQYMBaAFBDjleEa6l15paazMCumcG+aQVOeMB0G\n"
"A1UdDgQWBBRL1UUkjnv+A/Y7YvKVWw+zJy+VzzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAkBJIPob36afHck5rkkgYRm3H\n"
"OmldbzzjXg5LV3PhEbdJ8hH+/FImuu9PGFj9GX+l/WEp7Gygpa64B2lMEKUdhouB\n"
"ECJ7wivaZagrd4wQcDhcARiZL99zZtV+5GmyfLn535jWqq9iTjxV2Ikl6TtLZ/47\n"
"7JHiyEz2fCQZk6jng7dnoBoJdbrwVXuOsg+3wy8eboWj+EcHxNFGy6hyRO8JmjyT\n"
"GiD82ZjbQ7bB9TtkrB/7UKcj2kSheSp6xOlKjJAjpTuuFyaMI8OQACPqoj4EbS0v\n"
"QC5Zuj9uBH3MDhat+l3QJe0dmSC5M6fznN0Ei9u14OgPBnw1mSCXnZ4t+s7RRg==\n"
"-----END CERTIFICATE-----";

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----"
 * "...base64 data..."
 * "-----END RSA PRIVATE KEY-----";
 */
static const char clientcredentialCLIENT_PRIVATE_KEY_PEM[] =
"-----BEGIN RSA PRIVATE KEY-----\n"
"MIIEowIBAAKCAQEAzTPTSej/nMcycIVamYyz+8AYtRLqUMq3LcMCOJmjQDCok/oT\n"
"n/nsiWCGUj+V1Krgd7bhIb/g3y5b7pp5L7peyrtbGTTPT68dop3+Lsoq0Pk3ABqn\n"
"o34JIQsMXOfuI0C3vBqT2VIktTYlBjnus01ycXMWadEY2LScNcsDiH3qYUH8jYiD\n"
"Hm/Aklu8uSHTy6mMfJpMwOtq7owBU/gaCANTCE1tSGgiUFaXtGVWsSOi3OlyFxDF\n"
"RveXot/lOwRdH4bRiPN7GyzlYJ6Ak0oKA3uMaE+tIiUBuYnkPTcLs7MyqtI9b6nv\n"
"Wy8KFERkO8qWQvs95bgvHVaETO3ShuUGRVPPLQIDAQABAoIBAGOQzOlk03oHsTKl\n"
"keNFQSNa/uIFLopLAfyDTXWXHn4L3hAG3DTYOGwj2KjZz2JkEwwjQTN1/a9suBCb\n"
"BUgiPtJRfA9L73czecaosGeVkpbZBVXYmRScF+Pfj30Y0BRs13m+z5Q35jXC8s4F\n"
"mAuJ/YiMlgh7+3lSkSUMv0cgCXRsiHsbHbdinKefpCNpBv1LIr0U646z9G/nBCuO\n"
"uFa4ixUXNxQAV4+f0GcJ4sdTFGATp3knduzvTvR2dZI+YnDH3Xw3QBAeNpXIGy6q\n"
"18D76xMmGyPh6WRxWA0+J7lWW0yj1JFzcPJMUQ+iq11+oo4w1a3PN5UeSvnsvM/m\n"
"1ZppzAUCgYEA7qdOX02AksMO7KYRPykQAgUis+v9SUKZ3WrEzZslur0HAnEVojPK\n"
"KesskxZ3BBsoraw9zgj61skGsFifpDEnHkns/AxUEZ2uCZpFMPRShgUzM18nN9O1\n"
"yepNptrwT7lO1j3mwgaNGVo+cfXgyGoAyDIQuk6cetf9nFUJyZmcvAMCgYEA3B4V\n"
"zyLg3V3ZXIxkvv6iAoPV6Yy+o93ZAX16A/uSJ5S77hymftscStLW/9xql4CE3dm+\n"
"zGjvaheDMaywP09VGG7hTOqFRdJsTIH/x9tG6H6u1zZ34aDDy+P5JB/OkBAWmyaG\n"
"E/9f/LjuNprhBUDDXNxPcb7gSt+7PbeF1y7tmQ8CgYBRExVU2wdq1Eklq+UAB/sg\n"
"NI5tgSYy1SVgSv1AvAw9PCo9ch1fVSjAxNwHvAICqxdOqMz2SaatgO18yx6wsOIR\n"
"MBwKJEYLFf4h1P7ceqPuU6XpNdIk7Q884RQwMwCglNtrfOv/zinxCu9b16PdceWC\n"
"HUABiuMt+GJ30YvZqQ3N8QKBgQDaSJ96FW2HOQ1XwQYbfeptsg2NGPzpBhSwbJ12\n"
"m6D5zX58iD74KBOrg+CgRRYTfejFFK0oipt5yy1YMpdpgSOzIiodG6jkb+LkEDr2\n"
"F9b+srpyQ9qojsP8SuyDzWML7FhurcpixGqM9VuOHRMvIWVbjkLeWtqUhcBqWLfK\n"
"iAgpMwKBgGoOy2+dWf7AlQt1exu5wqnudMeloH6E26N6fKkU8/9EYoGnc1i6OFjh\n"
"32mFfk99iSEoFGXfgQXOViIQFjEsqx54P4ucB406g7weg149nL1LlRZA3doeCLKr\n"
"raVgV1UfoDE6lkq7TJI+sTdfTMk5woklsVcx4d6Ask+kYCO1ro0D\n"
"-----END RSA PRIVATE KEY-----";

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----"
 * "...base64 data..."
 * "-----END CERTIFICATE-----";
 */
static const char * clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM = NULL;