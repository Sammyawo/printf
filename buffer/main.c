#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 i
 *iReturn: Always 0
 */
int main(void)
{
int len;
int len2;
unsigned int ui;
/* void *addr; */

printf("\n\n");
printf("%d\n", _printf("%R\n", "Arturo 23 orutrA"));
printf("\n\n");
printf("%d\n", _printf("%b", 0));
printf("%d\n", printf("%b", 0));
printf("%d\n", _printf("%b", 4294967295));
printf("%d\n", printf("%b", 4294967295));
printf("%d\n", _printf("%b", 500));
printf("%d\n", printf("%b", 500));

printf("\n\n");

printf("%d\n", _printf("%d", -2147483648));
printf("%d\n", printf("%d", -2147483648));
printf("%d\n", _printf("%d", 2147483647));
printf("%d\n", printf("%d", 2147483647));
printf("%d\n", _printf("%d", 0));
printf("%d\n", printf("%d", 0));

printf("\n\n");

printf("%d\n", _printf("%"));
printf("%d\n", _printf("%"));
printf("%d\n", _printf("%yyyd\n"));
printf("%d\n", printf("%yyyd\n"));
printf("%d\n", _printf("Hola %s Hola\n", NULL));
printf("%d\n", printf("Hola %s Hola\n", NULL));
printf("%d\n", _printf(NULL));
printf("%d\n", printf(NULL));
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
/* addr = (void *)0x7ffe637541f0; */
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

printf("\n\n");
len = _printf("%r\n","Let's try to printf a simple sentence.");
len2 = printf("%r\n","Let's try to printf a simple sentence.");
ui = (unsigned int)INT_MAX + 1024;
/* addr = (void *)0x7ffe637541f0; */
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
printf("\n\n");

_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
/* _printf("Address:[%p]\n", addr); */
/* printf("Address:[%p]\n", addr); */
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
printf("------------------------------------------------\n");
printf("%d\n", _printf("%b", 0));
printf("%d\n", printf("%b", 0));
printf("--\n");
printf("%d\n", _printf("%b", 4294967295));
printf("%d\n", printf("%b", 4294967295));
printf("--\n");
printf("%d\n", _printf("%b", 500));
printf("%d\n", printf("%b", 500));
printf("--\n");
printf("%d\n", _printf(""));
printf("%d\n", printf(""));
printf("--\n");
printf("%d\n", _printf("012345678901234567890123456789\n"));
printf("%d\n", printf("012345678901234567890123456789\n"));
printf("--\n");

printf("%d\n", printf("qwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiuqwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiuqwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiu\n"));
printf("%d\n", _printf("qwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiuqwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiuqwieuiwqueiwqieuq qeiuwqeiuvfkjdsvfhslkjfewbfkjsf.kjnajfdsajfhfkjhkjfbvcxnmbvcxnmxbcnxxxxxxxxxxxxxmmmmmmmmmmmmmmmmmmmmmmmmmmmlkjdsflkjlkdsjflksjdlkfjdslkfjkdsjfkjdslkfjslkdjflkdsflkjsdlkfjdslkflkjsakfjslkjflksjdkfjdslkjriewuroiu43o659837598432798r78eufiuewhyriuy234532uhfrlkuewhflkuhewlkfsadf,dsf.ds,.f,sñkfñkfjslhfiusaiwueiruiewurñihjfñlkjdskjfhlkjhlkjhewlkjhtrlkjhewltruewrewkjrflkjhflkjhsalkjfhlkjdshfkjshdkfljhdskjfhlkdshfjshflkjhsjfhslkjhfjdshflkjdshlkjfhdshfdslkjhfhsflkjhlkjrhweiuyrwquporurpowqpopoiqpoipoiq12098328709ewhfewhfjhkjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkjdkjwqkkqkqkwjekjwqhkjehwqjehkjwqhekjwqhekuhqiuyiu32y4y32874328749832648732648763287463287648732648732647863274628736487278236487263874623874687236478628736478326487632ryewyriuewyriuyewiuryewiu\n"));
printf("--\n");
printf("%d\n", _printf("%S\n", "Holberton\nSchool"));
printf("%d\n", _printf("%S\n", "Holberton\x7FSchool"));
printf("--\n");
printf("--\n");
printf("%d\n", printf("%p\n", &len));
printf("%d\n", _printf("%p\n", &len));
printf("%d\n", printf("%p\n", NULL));
printf("%d\n", _printf("%p\n", NULL));
printf("--\n");
return (0);
}
