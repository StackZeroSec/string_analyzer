#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv) {

    const char* patterns[30] = {
        // Emails (5 examples)
        "user@example.com",
        "test.email@domain.org",
        "name.surname@company.net",
        "info@website.io",
        "contact@host.co.uk",

        // URLs (5 examples)
        "http://www.example.com",
        "https://www.website.org",
        "ftp://ftp.server.net",
        "https://subdomain.example.com/path",
        "http://www.domain.co.uk/path",

        // IPv4 Addresses (5 examples)
        "192.168.1.1",
        "10.0.0.2",
        "172.16.254.3",
        "8.8.8.8",
        "127.0.0.1",

        // IPv6 Addresses (5 examples)
        "2001:0db8:85a3:0000:0000:8a2e:0370:7334",
        "fe80::1ff:fe23:4567:890a",
        "::1",
        "2001:db8::1234:ace:6006:1e",
        "fe80::202:b3ff:fe1e:8329",

        // MAC Addresses (5 examples)
        "00:1A:2B:3C:4D:5E",
        "00-1A-2B-3C-4D-5E",
        "01-23-45-67-89-ab",
        "01:23:45:67:89:ab",
        "FF-FF-FF-FF-FF-FF",

        // Non-matching strings (5 examples)
        "NotAnEmailOrUrl1",
        "JustSomeTextWith123",
        "Another-String_WithoutPattern",
        "RandomText+NotURL",
        "MismatchedPattern#123456"
    };

    //print random string from array with timestamp seed
    srand(time(NULL));
    printf("%s\n", patterns[rand() % 30]);

    return 0;
}