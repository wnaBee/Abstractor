#include <string>
#include "cppenummap.h"
using namespace std;
string cppcommentMake(string commentarg) {
	string comment = "";
	switch (kwd::resolveOption(commentarg)){
		case kwd::opt1:
		//Option_invalid
		comment += commentarg + " ";
		break;
		case kwd::opt2:
		//assert
		comment += "Evaluate assertion ";
		break;
		case kwd::opt3:
		//isalpha
		comment += "Check if character is alphabetic ";
		break;
		case kwd::opt4:
		//isblank
		comment += "Check if character is blank ";
		break;
		case kwd::opt5:
		//iscntrl
		comment += "Check if character is a control character ";
		break;
		case kwd::opt6:
		//isdigit
		comment += "Check if character is decimal digit ";
		break;
		case kwd::opt7:
		//isgraph
		comment += "Check if character has graphical representation ";
		break;
		case kwd::opt8:
		//islower
		comment += "Check if character is lowercaseletter ";
		break;
		case kwd::opt9:
		//isprint
		comment += "Check if character is printable ";
		break;
		case kwd::opt10:
		//ispunct
		comment += "Check if character is a punctuation character ";
		break;
		case kwd::opt11:
		//isspace
		comment += "Check if character is a white-space ";
		break;
		case kwd::opt12:
		//isupper
		comment += "Check if character is uppercaseletter ";
		break;
		case kwd::opt13:
		//isxdigit
		comment += "Check if character is hexadecimal digit ";
		break;
		case kwd::opt14:
		//tolower
		comment += "Convert uppercaseletter to lowercase kwd::";
		break;
		case kwd::opt15:
		//toupper
		comment += "Convert lowercaseletter to uppercase kwd::";
		break;
		case kwd::opt16:
		//errno
		comment += "Last error number ";
		break;
		case kwd::opt17:
		//feclearexcept
		comment += "Clear floating-point exceptions ";
		break;
		case kwd::opt18:
		//feraiseexcept
		comment += "Raise floating-point exception ";
		break;
		case kwd::opt19:
		//fegetexceptflag
		comment += "Get floating-point exception flags ";
		break;
		case kwd::opt20:
		//fesetexceptflag
		comment += "Set floating-point exception flags ";
		break;
		case kwd::opt21:
		//fegetround
		comment += "Get rounding direction mode ";
		break;
		case kwd::opt22:
		//fesetround
		comment += "Set rounding direction mode ";
		break;
		case kwd::opt23:
		//fegetenv
		comment += "Get floating-point environment ";
		break;
		case kwd::opt24:
		//fesetenv
		comment += "Set floating-point environment ";
		break;
		case kwd::opt25:
		//feholdexcept
		comment += "Hold floating-point exceptions ";
		break;
		case kwd::opt26:
		//feupdateenv
		comment += "Update floating-point environment ";
		break;
		case kwd::opt27:
		//fetestexcept
		comment += "Test for floating-point exceptions ";
		break;
		case kwd::opt28:
		//fenv_t
		comment += "Floating-point environment type ";
		break;
		case kwd::opt29:
		//fexcept_t
		comment += "Floating-point exceptions type ";
		break;
		case kwd::opt30:
		//FE_DIVBYZERO
		comment += "Pole error exception ";
		break;
		case kwd::opt31:
		//FE_INEXACT
		comment += "Inexact result exception ";
		break;
		case kwd::opt32:
		//FE_INVALID
		comment += "Invalid argument exception ";
		break;
		case kwd::opt33:
		//FE_OVERFLOW
		comment += "Overflow range error exception ";
		break;
		case kwd::opt34:
		//FE_UNDERFLOW
		comment += "Underflow range error exception ";
		break;
		case kwd::opt35:
		//FE_ALL_EXCEPT
		comment += "All exceptions ";
		break;
		case kwd::opt36:
		//FE_DOWNWARD
		comment += "Downward rounding direction mode ";
		break;
		case kwd::opt37:
		//FE_TONEAREST
		comment += "To-nearest rounding direction mode ";
		break;
		case kwd::opt38:
		//FE_TOWARDZERO
		comment += "Toward-zero rounding direction mode ";
		break;
		case kwd::opt39:
		//FE_UPWARD
		comment += "Upward rounding direction mode ";
		break;
		case kwd::opt40:
		//FE_DFL_ENV
		comment += "Default environment ";
		break;
		case kwd::opt41:
		//FENV_ACCESS
		comment += "Access to Floating-point environment ";
		break;
		case kwd::opt42:
		//<climits>
		comment += "Sizes of integral types";
		break;
		case kwd::opt43:
		//<cfloat>
		comment += "Characteristics of floating-point types ";
		break;
		case kwd::opt44:
		//structlconv
		comment += " Formatting info for numeric values";
		break;
		case kwd::opt45:
		//setlocale
		comment += "Set or retrieve locale ";
		break;
		case kwd::opt46:
		//localeconv
		comment += "Get locale formatting parameters for quantities ";
		break;
		case kwd::opt47:
		//cos
		comment += "Compute cosine ";
		break;
		case kwd::opt48:
		//sin
		comment += "Compute sine ";
		break;
		case kwd::opt49:
		//tan
		comment += "Compute tangent ";
		break;
		case kwd::opt50:
		//acos
		comment += "Compute arc cosine ";
		break;
		case kwd::opt51:
		//asin
		comment += "Compute arc sine ";
		break;
		case kwd::opt52:
		//atan
		comment += "Compute arc tangent ";
		break;
		case kwd::opt53:
		//atan2
		comment += "Compute arc tangent with two parameters ";
		break;
		case kwd::opt54:
		//cosh
		comment += "Compute hyperbolic cosine ";
		break;
		case kwd::opt55:
		//sinh
		comment += "Compute hyperbolic sine ";
		break;
		case kwd::opt56:
		//tanh
		comment += "Compute hyperbolic tangent ";
		break;
		case kwd::opt57:
		//acosh
		comment += "Compute area hyperbolic cosine ";
		break;
		case kwd::opt58:
		//asinh
		comment += "Compute area hyperbolic sine ";
		break;
		case kwd::opt59:
		//atanh
		comment += "Compute area hyperbolic tangent ";
		break;
		case kwd::opt60:
		//exp
		comment += "Compute exponential function ";
		break;
		case kwd::opt61:
		//frexp
		comment += "Get significand and exponent ";
		break;
		case kwd::opt62:
		//ldexp
		comment += "Generate value from significand and exponent ";
		break;
		case kwd::opt63:
		//log
		comment += "Compute natural logarithm ";
		break;
		case kwd::opt64:
		//log10
		comment += "Compute common logarithm ";
		break;
		case kwd::opt65:
		//modf
		comment += "Break into fractional and integral parts ";
		break;
		case kwd::opt66:
		//exp2
		comment += "Compute binary exponential function ";
		break;
		case kwd::opt67:
		//expm1
		comment += "Compute exponential minus one ";
		break;
		case kwd::opt68:
		//ilogb
		comment += "Integer binary logarithm ";
		break;
		case kwd::opt69:
		//log1p
		comment += "Compute logarithm plus one ";
		break;
		case kwd::opt70:
		//log2
		comment += "Compute binary logarithm ";
		break;
		case kwd::opt71:
		//logb
		comment += "Compute floating-point base logarithm ";
		break;
		case kwd::opt72:
		//scalbn
		comment += "Scale significand using floating-point base exponent ";
		break;
		case kwd::opt73:
		//scalbln
		comment += "Scale significand using floating-point base exponent (long) ";
		break;
		case kwd::opt74:
		//pow
		comment += "Raise to power ";
		break;
		case kwd::opt75:
		//sqrt
		comment += "Compute square root ";
		break;
		case kwd::opt76:
		//cbrt
		comment += "Compute cubic root ";
		break;
		case kwd::opt77:
		//hypot
		comment += "Compute hypotenuse ";
		break;
		case kwd::opt78:
		//erf
		comment += "Compute error function ";
		break;
		case kwd::opt79:
		//erfc
		comment += "Compute complementary error function ";
		break;
		case kwd::opt80:
		//tgamma
		comment += "Compute gamma function ";
		break;
		case kwd::opt81:
		//lgamma
		comment += "Compute log-gamma function ";
		break;
		case kwd::opt82:
		//ceil
		comment += "Round up value ";
		break;
		case kwd::opt83:
		//floor
		comment += "Round down value ";
		break;
		case kwd::opt84:
		//fmod
		comment += "Compute remainder of division ";
		break;
		case kwd::opt85:
		//trunc
		comment += "Truncate value ";
		break;
		case kwd::opt86:
		//round
		comment += "Round to nearest ";
		break;
		case kwd::opt87:
		//lround
		comment += "Round to nearest and cast to long integer ";
		break;
		case kwd::opt88:
		//llround
		comment += "Round to nearest and cast to long long integer ";
		break;
		case kwd::opt89:
		//rint
		comment += "Round to integral value ";
		break;
		case kwd::opt90:
		//lrint
		comment += "Round and cast to long integer ";
		break;
		case kwd::opt91:
		//llrint
		comment += "Round and cast to long long integer ";
		break;
		case kwd::opt92:
		//nearbyint
		comment += "Round to nearby integral value ";
		break;
		case kwd::opt93:
		//remainder
		comment += "Compute remainder (IEC 60559) ";
		break;
		case kwd::opt94:
		//remquo
		comment += "Compute remainder and quotient ";
		break;
		case kwd::opt95:
		//copysign
		comment += "Copy sign ";
		break;
		case kwd::opt96:
		//nan
		comment += "Generate quiet NaN ";
		break;
		case kwd::opt97:
		//nextafter
		comment += "Next representable value ";
		break;
		case kwd::opt98:
		//nexttoward
		comment += "Next representable value toward precise value ";
		break;
		case kwd::opt99:
		//fdim
		comment += "Positive difference ";
		break;
		case kwd::opt100:
		//fmax
		comment += "Maximum value ";
		break;
		case kwd::opt101:
		//fmin
		comment += "Minimum value ";
		break;
		case kwd::opt102:
		//fabs
		comment += "Compute absolute value ";
		break;
		case kwd::opt103:
		//abs
		comment += "Compute absolute value ";
		break;
		case kwd::opt104:
		//fma
		comment += "Multiply-add ";
		break;
		case kwd::opt105:
		//fpclassify
		comment += "Classify floating-point value ";
		break;
		case kwd::opt106:
		//isfinite
		comment += "Is finite value ";
		break;
		case kwd::opt107:
		//isinf
		comment += "Is infinity ";
		break;
		case kwd::opt108:
		//isnan
		comment += "Is Not-A-Number ";
		break;
		case kwd::opt109:
		//isnormal
		comment += "Is normal ";
		break;
		case kwd::opt110:
		//signbit
		comment += "Sign bit ";
		break;
		case kwd::opt111:
		//isgreater
		comment += "Is greater ";
		break;
		case kwd::opt112:
		//isgreaterequal
		comment += "Is greater or equal ";
		break;
		case kwd::opt113:
		//isless
		comment += "Is less ";
		break;
		case kwd::opt114:
		//islessequal
		comment += "Is less or equal ";
		break;
		case kwd::opt115:
		//islessgreater
		comment += "Is less or greater ";
		break;
		case kwd::opt116:
		//isunordered
		comment += "Is unordered ";
		break;
		case kwd::opt117:
		//math_errhandling
		comment += "Error handling ";
		break;
		case kwd::opt118:
		//INFINITY
		comment += "Infinity ";
		break;
		case kwd::opt119:
		//NAN
		comment += "Not-A-Number ";
		break;
		case kwd::opt120:
		//HUGE_VAL
		comment += "Huge value ";
		break;
		case kwd::opt121:
		//HUGE_VALF
		comment += "Huge float valueHuge long double value ";
		break;
		case kwd::opt122:
		//HUGE_VALL
		comment += "Huge float valueHuge long double value ";
		break;
		case kwd::opt123:
		//double_t
		comment += "Floating-point type ";
		break;
		case kwd::opt124:
		//float_t
		comment += "Floating-point type ";
		break;
		case kwd::opt125:
		//longjmp
		comment += "Long jump ";
		break;
		case kwd::opt126:
		//setjmp
		comment += "Save calling environment for long jump ";
		break;
		case kwd::opt127:
		//jmp_buf
		comment += "Type to hold information to restore calling environment ";
		break;
		case kwd::opt128:
		//signal
		comment += "Set function to handle signal ";
		break;
		case kwd::opt129:
		//raise
		comment += "Generates a signal ";
		break;
		case kwd::opt130:
		//sig_atomic_t
		comment += "Integral type ";
		break;
		case kwd::opt131:
		//va_list
		comment += "Type to hold information about variable arguments ";
		break;
		case kwd::opt132:
		//va_start
		comment += "Initialize a variable argument list ";
		break;
		case kwd::opt133:
		//va_arg
		comment += "Retrieve next argument ";
		break;
		case kwd::opt134:
		//va_end
		comment += "End using variable argument list ";
		break;
		case kwd::opt135:
		//va_copy
		comment += "Copy variable argument list ";
		break;
		case kwd::opt136:
		//ptrdiff_t
		comment += "Result of pointer subtraction ";
		break;
		case kwd::opt137:
		//size_t
		comment += "Unsigned integral type ";
		break;
		case kwd::opt138:
		//max_align_t
		comment += "Type with widest scalar alignment ";
		break;
		case kwd::opt139:
		//nullptr_t
		comment += "Null pointer type (C++) ";
		break;
		case kwd::opt140:
		//offsetof
		comment += "Return member offset ";
		break;
		case kwd::opt141:
		//NULL
		comment += "Null pointer ";
		break;
		case kwd::opt142:
		//remove
		comment += "Remove value or file ";
		break;
		case kwd::opt143:
		//rename
		comment += "Rename file ";
		break;
		case kwd::opt144:
		//tmpfile
		comment += "Open a temporary file ";
		break;
		case kwd::opt145:
		//tmpnam
		comment += "Generate temporary filename ";
		break;
		case kwd::opt146:
		//fclose
		comment += "Close file ";
		break;
		case kwd::opt147:
		//fflush
		comment += "Flush stream ";
		break;
		case kwd::opt148:
		//fopen
		comment += "Open file ";
		break;
		case kwd::opt149:
		//freopen
		comment += "Reopen stream with different file or mode ";
		break;
		case kwd::opt150:
		//setbuf
		comment += "Set stream buffer ";
		break;
		case kwd::opt151:
		//setvbuf
		comment += "Change stream buffering ";
		break;
		case kwd::opt152:
		//fprintf
		comment += "Write formatted data to stream ";
		break;
		case kwd::opt153:
		//fscanf
		comment += "Read formatted data from stream ";
		break;
		case kwd::opt154:
		//printf
		comment += "Print formatted data to stdout ";
		break;
		case kwd::opt155:
		//scanf
		comment += "Read formatted data from stdin ";
		break;
		case kwd::opt156:
		//snprintf
		comment += "Write formatted output to sized buffer ";
		break;
		case kwd::opt157:
		//sprintf
		comment += "Write formatted data to string ";
		break;
		case kwd::opt158:
		//sscanf
		comment += "Read formatted data from string ";
		break;
		case kwd::opt159:
		//vfprintf
		comment += "Write formatted data from variable argument list to stream ";
		break;
		case kwd::opt160:
		//vfscanf
		comment += "Read formatted data from stream into variable argument list ";
		break;
		case kwd::opt161:
		//vprintf
		comment += "Print formatted data from variable argument list to stdout ";
		break;
		case kwd::opt162:
		//vscanf
		comment += "Read formatted data into variable argument list ";
		break;
		case kwd::opt163:
		//vsnprintf
		comment += "Write formatted data from variable argument list to sized buffer ";
		break;
		case kwd::opt164:
		//vsprintf
		comment += "Write formatted data from variable argument list to string ";
		break;
		case kwd::opt165:
		//vsscanf
		comment += "Read formatted data from string into variable argument list ";
		break;
		case kwd::opt166:
		//fgetc
		comment += "Get character from stream ";
		break;
		case kwd::opt167:
		//fgets
		comment += "Get string from stream ";
		break;
		case kwd::opt168:
		//fputc
		comment += "Write character to stream ";
		break;
		case kwd::opt169:
		//fputs
		comment += "Write string to stream ";
		break;
		case kwd::opt170:
		//getc
		comment += "Get character from stream ";
		break;
		case kwd::opt171:
		//getchar
		comment += "Get character from stdin ";
		break;
		case kwd::opt172:
		//gets
		comment += "Get string from stdin ";
		break;
		case kwd::opt173:
		//putc
		comment += "Write character to stream ";
		break;
		case kwd::opt174:
		//putchar
		comment += "Write character to stdout ";
		break;
		case kwd::opt175:
		//puts
		comment += "Write string to stdout ";
		break;
		case kwd::opt176:
		//ungetc
		comment += "Unget character from stream ";
		break;
		case kwd::opt177:
		//fread
		comment += "Read block of data from stream ";
		break;
		case kwd::opt178:
		//fwrite
		comment += "Write block of data to stream ";
		break;
		case kwd::opt179:
		//fgetpos
		comment += "Get current position in stream ";
		break;
		case kwd::opt180:
		//fseek
		comment += "Reposition stream position indicator ";
		break;
		case kwd::opt181:
		//fsetpos
		comment += "Set position indicator of stream ";
		break;
		case kwd::opt182:
		//ftell
		comment += "Get current position in stream ";
		break;
		case kwd::opt183:
		//rewind
		comment += "Set position of stream to the beginning ";
		break;
		case kwd::opt184:
		//clearerr
		comment += "Clear error indicators ";
		break;
		case kwd::opt185:
		//feof
		comment += "Check end-of-file indicator ";
		break;
		case kwd::opt186:
		//ferror
		comment += "Check error indicator ";
		break;
		case kwd::opt187:
		//perror
		comment += "Print error message ";
		break;
		case kwd::opt188:
		//BUFSIZ
		comment += "Buffer size ";
		break;
		case kwd::opt189:
		//EOF
		comment += "End-of-File ";
		break;
		case kwd::opt190:
		//FILENAME_MAX
		comment += "Maximum length of file names ";
		break;
		case kwd::opt191:
		//FOPEN_MAX
		comment += "Potential limit of simultaneous open streams ";
		break;
		case kwd::opt192:
		//L_tmpnam
		comment += "Minimum length for temporary file name ";
		break;
		case kwd::opt193:
		//TMP_MAX
		comment += "Number of temporary files ";
		break;
		case kwd::opt194:
		//FILE
		comment += "Object containing information to control a stream ";
		break;
		case kwd::opt195:
		//fpos_t
		comment += "Object containing information to specify a position within a file ";
		break;
		case kwd::opt196:
		//atof
		comment += "Convert string to double ";
		break;
		case kwd::opt197:
		//atoi
		comment += "Convert string to integer ";
		break;
		case kwd::opt198:
		//atol
		comment += "Convert string to long integer ";
		break;
		case kwd::opt199:
		//atoll
		comment += "Convert string to long long integer ";
		break;
		case kwd::opt200:
		//strtod
		comment += "Convert string to double ";
		break;
		case kwd::opt201:
		//strtof
		comment += "Convert string to float ";
		break;
		case kwd::opt202:
		//strtol
		comment += "Convert string to long integer ";
		break;
		case kwd::opt203:
		//strtold
		comment += "Convert string to long double ";
		break;
		case kwd::opt204:
		//strtoll
		comment += "Convert string to long long integer ";
		break;
		case kwd::opt205:
		//strtoul
		comment += "Convert string to unsigned long integer ";
		break;
		case kwd::opt206:
		//strtoull
		comment += "Convert string to unsigned long long integer ";
		break;
		case kwd::opt207:
		//rand
		comment += "Generate random number ";
		break;
		case kwd::opt208:
		//srand
		comment += "Initialize random number generator ";
		break;
		case kwd::opt209:
		//calloc
		comment += "Allocate and zero-initialize array ";
		break;
		case kwd::opt210:
		//free
		comment += "Deallocate memory block ";
		break;
		case kwd::opt211:
		//malloc
		comment += "Allocate memory block ";
		break;
		case kwd::opt212:
		//realloc
		comment += "Reallocate memory block ";
		break;
		case kwd::opt213:
		//abort
		comment += "Abort current process ";
		break;
		case kwd::opt214:
		//atexit
		comment += "Set function to be executed on exit ";
		break;
		case kwd::opt215:
		//at_quick_exit
		comment += "Set function to be executed on quick exit ";
		break;
		case kwd::opt216:
		//exit
		comment += "Terminate calling process ";
		break;
		case kwd::opt217:
		//getenv
		comment += "Get environment string ";
		break;
		case kwd::opt218:
		//quick_exit
		comment += "Terminate calling process quick ";
		break;
		case kwd::opt219:
		//system
		comment += "Execute system command ";
		break;
		case kwd::opt220:
		//_Exit
		comment += "Terminate calling process ";
		break;
		case kwd::opt221:
		//bsearch
		comment += "Binary search in array ";
		break;
		case kwd::opt222:
		//qsort
		comment += "Sort elements of array ";
		break;
		case kwd::opt223:
		//div
		comment += "Integral division ";
		break;
		case kwd::opt224:
		//labs
		comment += "Absolute value ";
		break;
		case kwd::opt225:
		//ldiv
		comment += "Integral division ";
		break;
		case kwd::opt226:
		//llabs
		comment += "Absolute value ";
		break;
		case kwd::opt227:
		//lldiv
		comment += "Integral division ";
		break;
		case kwd::opt228:
		//mblen
		comment += "Get length of multibyte character ";
		break;
		case kwd::opt229:
		//mbtowc
		comment += "Convert multibyte sequence to wide character ";
		break;
		case kwd::opt230:
		//wctomb
		comment += "Convert wide character to multibyte sequence ";
		break;
		case kwd::opt231:
		//mbstowcs
		comment += "Convert multibyte string to wide-character string ";
		break;
		case kwd::opt232:
		//wcstombs
		comment += "Convert wide-character string to multibyte string ";
		break;
		case kwd::opt233:
		//EXIT_FAILURE
		comment += "Failure termination code ";
		break;
		case kwd::opt234:
		//EXIT_SUCCESS
		comment += "Success termination code ";
		break;
		case kwd::opt235:
		//MB_CUR_MAX
		comment += "Maximum size of multibyte characters ";
		break;
		case kwd::opt236:
		//RAND_MAX
		comment += "Maximum value returned by rand ";
		break;
		case kwd::opt237:
		//div_t
		comment += "Structure returned by div ";
		break;
		case kwd::opt238:
		//ldiv_t
		comment += "Structure returned by ldiv ";
		break;
		case kwd::opt239:
		//lldiv_t
		comment += "Structure returned by lldiv ";
		break;
		case kwd::opt240:
		//memcpy
		comment += "Copy block of memory ";
		break;
		case kwd::opt241:
		//memmove
		comment += "Move block of memory ";
		break;
		case kwd::opt242:
		//strcpy
		comment += "Copy string ";
		break;
		case kwd::opt243:
		//strncpy
		comment += "Copy characters from string ";
		break;
		case kwd::opt244:
		//strcat
		comment += "Concatenate strings ";
		break;
		case kwd::opt245:
		//strncat
		comment += "Append characters from string ";
		break;
		case kwd::opt246:
		//memcmp
		comment += "Compare two blocks of memory ";
		break;
		case kwd::opt247:
		//strcmp
		comment += "Compare two strings ";
		break;
		case kwd::opt248:
		//strcoll
		comment += "Compare two strings using locale ";
		break;
		case kwd::opt249:
		//strncmp
		comment += "Compare characters of two strings ";
		break;
		case kwd::opt250:
		//strxfrm
		comment += "Transform string using locale ";
		break;
		case kwd::opt251:
		//memchr
		comment += "Locate character in block of memory ";
		break;
		case kwd::opt252:
		//strchr
		comment += "Locate first occurrence of character in string ";
		break;
		case kwd::opt253:
		//strcspn
		comment += "Get span until character in string ";
		break;
		case kwd::opt254:
		//strpbrk
		comment += "Locate characters in string ";
		break;
		case kwd::opt255:
		//strrchr
		comment += "Locate last occurrence of character in string ";
		break;
		case kwd::opt256:
		//strspn
		comment += "Get span of character set in string ";
		break;
		case kwd::opt257:
		//strstr
		comment += "Locate substring ";
		break;
		case kwd::opt258:
		//strtok
		comment += "Split string into tokens ";
		break;
		case kwd::opt259:
		//memset
		comment += "Fill block of memory ";
		break;
		case kwd::opt260:
		//strerror
		comment += "Get pointer to error message string ";
		break;
		case kwd::opt261:
		//strlen
		comment += "Get string length ";
		break;
		case kwd::opt262:
		//clock
		comment += "Clock program ";
		break;
		case kwd::opt263:
		//difftime
		comment += "Return difference between two times ";
		break;
		case kwd::opt264:
		//mktime
		comment += "Convert tm structure to time_t ";
		break;
		case kwd::opt265:
		//time
		comment += "Get current time ";
		break;
		case kwd::opt266:
		//asctime
		comment += "Convert tm structure to string ";
		break;
		case kwd::opt267:
		//ctime
		comment += "Convert time_t value to string ";
		break;
		case kwd::opt268:
		//gmtime
		comment += "Convert time_t to tm as UTC time ";
		break;
		case kwd::opt269:
		//localtime
		comment += "Convert time_t to tm as local time ";
		break;
		case kwd::opt270:
		//strftime
		comment += "Format time as string ";
		break;
		case kwd::opt271:
		//CLOCKS_PER_SEC
		comment += "Clock ticks per second ";
		break;
		case kwd::opt272:
		//clock_t
		comment += "Clock type ";
		break;
		case kwd::opt273:
		//time_t
		comment += "Time type ";
		break;
		case kwd::opt274:
		//structtm
		comment += "Time structure ";
		break;
		case kwd::opt275:
		//c16rtomb
		comment += "Convert 16-bit character to multibyte sequence ";
		break;
		case kwd::opt276:
		//c32rtomb
		comment += "Convert 32-bit character to multibyte sequence ";
		break;
		case kwd::opt277:
		//mbrtoc16
		comment += "Convert multibyte sequence to 16-bit character ";
		break;
		case kwd::opt278:
		//mbrtoc32
		comment += "Convert multibyte sequence to 32-bit character ";
		break;
		case kwd::opt279:
		//fgetwc
		comment += "Get wide character from stream ";
		break;
		case kwd::opt280:
		//fgetws
		comment += "Get wide string from stream ";
		break;
		case kwd::opt281:
		//fputwc
		comment += "Write wide character to stream ";
		break;
		case kwd::opt282:
		//fputws
		comment += "Write wide string to stream ";
		break;
		case kwd::opt283:
		//fwide
		comment += "Stream orientation ";
		break;
		case kwd::opt284:
		//fwprintf
		comment += "Write formatted data to stream ";
		break;
		case kwd::opt285:
		//fwscanf
		comment += "Read formatted data from stream ";
		break;
		case kwd::opt286:
		//getwc
		comment += "Get wide character from stream ";
		break;
		case kwd::opt287:
		//getwchar
		comment += "Get wide character from stdin ";
		break;
		case kwd::opt288:
		//putwc
		comment += "Write wide character to stream ";
		break;
		case kwd::opt289:
		//putwchar
		comment += "Write wide character to stdout ";
		break;
		case kwd::opt290:
		//swprintf
		comment += "Write formatted data to wide string ";
		break;
		case kwd::opt291:
		//swscanf
		comment += "Read formatted data from string ";
		break;
		case kwd::opt292:
		//ungetwc
		comment += "Unget wide character from stream ";
		break;
		case kwd::opt293:
		//vfwprintf
		comment += "Write formatted data from variable argument list to stream ";
		break;
		case kwd::opt294:
		//vfwscanf
		comment += "Read formatted data from stream into variable argument list ";
		break;
		case kwd::opt295:
		//vswprintf
		comment += "Write formatted data from variable argument list to sized buffer ";
		break;
		case kwd::opt296:
		//vswscanf
		comment += "Read formatted data from wide string into variable argument list ";
		break;
		case kwd::opt297:
		//vwprintf
		comment += "Print formatted data from variable argument list to stdout ";
		break;
		case kwd::opt298:
		//vwscanf
		comment += "Read formatted data into variable argument list ";
		break;
		case kwd::opt299:
		//wprintf
		comment += "Print formatted data to stdout ";
		break;
		case kwd::opt300:
		//wscanf
		comment += "Read formatted data from stdin ";
		break;
		case kwd::opt301:
		//wcstod
		comment += "Convert wide string to double ";
		break;
		case kwd::opt302:
		//wcstof
		comment += "Convert wide string to float ";
		break;
		case kwd::opt303:
		//wcstol
		comment += "Convert wide string to long integer ";
		break;
		case kwd::opt304:
		//wcstold
		comment += "Convert wide string to long double ";
		break;
		case kwd::opt305:
		//wcstoll
		comment += "Convert wide string to long long integer ";
		break;
		case kwd::opt306:
		//wcstoul
		comment += "Convert wide string to unsigned long integer ";
		break;
		case kwd::opt307:
		//wcstoull
		comment += "Convert wide string to unsigned long long integer ";
		break;
		case kwd::opt308:
		//btowc
		comment += "Convert single byte character to wide character ";
		break;
		case kwd::opt309:
		//mbrlen
		comment += "Get length of multibyte character ";
		break;
		case kwd::opt310:
		//mbrtowc
		comment += "Convert multibyte sequence to wide character ";
		break;
		case kwd::opt311:
		//mbsinit
		comment += "Check if initial conversion state ";
		break;
		case kwd::opt312:
		//mbsrtowcs
		comment += "Convert multibyte string to wide-character string ";
		break;
		case kwd::opt313:
		//wcrtomb
		comment += "Convert wide character to multibyte sequence ";
		break;
		case kwd::opt314:
		//wctob
		comment += "Convert wide character to single byte ";
		break;
		case kwd::opt315:
		//wcsrtombs
		comment += "Convert wide-character string to multibyte string ";
		break;
		case kwd::opt316:
		//wcscat
		comment += "Concatenate wide strings ";
		break;
		case kwd::opt317:
		//wcschr
		comment += "Locate first occurrence of character in wide string ";
		break;
		case kwd::opt318:
		//wcscmp
		comment += "Compare two strings ";
		break;
		case kwd::opt319:
		//wcscoll
		comment += "Compare two wide strings using locale ";
		break;
		case kwd::opt320:
		//wcscpy
		comment += "Copy wide string ";
		break;
		case kwd::opt321:
		//wcscspn
		comment += "Get span until character in wide string ";
		break;
		case kwd::opt322:
		//wcslen
		comment += "Get wide string length ";
		break;
		case kwd::opt323:
		//wcsncat
		comment += "Append characters from wide string ";
		break;
		case kwd::opt324:
		//wcsncmp
		comment += "Compare characters of two wide strings ";
		break;
		case kwd::opt325:
		//wcsncpy
		comment += "Copy characters from wide string ";
		break;
		case kwd::opt326:
		//wcspbrk
		comment += "Locate characters in wide string ";
		break;
		case kwd::opt327:
		//wcsrchr
		comment += "Locate last occurrence of character in wide string ";
		break;
		case kwd::opt328:
		//wcsspn
		comment += "Get span of character set in wide string ";
		break;
		case kwd::opt329:
		//wcsstr
		comment += "Locate substring of wide string ";
		break;
		case kwd::opt330:
		//wcstok
		comment += "Split wide string into tokens ";
		break;
		case kwd::opt331:
		//wcsxfrm
		comment += "Transform wide string using locale ";
		break;
		case kwd::opt332:
		//wmemchr
		comment += "Locate character in block of wide characters ";
		break;
		case kwd::opt333:
		//wmemcmp
		comment += "Compare two blocks of wide characters ";
		break;
		case kwd::opt334:
		//wmemcpy
		comment += "Copy block of wide characters ";
		break;
		case kwd::opt335:
		//wmemmove
		comment += "Move block of wide characters ";
		break;
		case kwd::opt336:
		//wmemset
		comment += "Fill array of wide characters ";
		break;
		case kwd::opt337:
		//wcsftime
		comment += "Format time as wide string ";
		break;
		case kwd::opt338:
		//mbstate_t
		comment += "Multibyte conversion state ";
		break;
		case kwd::opt339:
		//wchar_t
		comment += "Wide character ";
		break;
		case kwd::opt340:
		//wint_t
		comment += "Wide int type (header/type)";
		break;
		case kwd::opt341:
		//WCHAR_MAX
		comment += "Maximum value of wchar_t ";
		break;
		case kwd::opt342:
		//WCHAR_MIN
		comment += "Minimum value of wchar_t ";
		break;
		case kwd::opt343:
		//WEOF
		comment += "Wide end-of-file ";
		break;
		case kwd::opt344:
		//iswalnum
		comment += "Check if wide character is alphanumeric ";
		break;
		case kwd::opt345:
		//iswalpha
		comment += "Check if wide character is alphabetic ";
		break;
		case kwd::opt346:
		//iswblank
		comment += "Check if wide character is blank ";
		break;
		case kwd::opt347:
		//iswcntrl
		comment += "Check if wide character is a control character ";
		break;
		case kwd::opt348:
		//iswdigit
		comment += "Check if wide character is decimal digit ";
		break;
		case kwd::opt349:
		//iswgraph
		comment += "Check if wide character has graphical representation ";
		break;
		case kwd::opt350:
		//iswlower
		comment += "Check if wide character is lowercaseletter ";
		break;
		case kwd::opt351:
		//iswprint
		comment += "Check if wide character is printable ";
		break;
		case kwd::opt352:
		//iswpunct
		comment += "Check if wide character is punctuation character ";
		break;
		case kwd::opt353:
		//iswspace
		comment += "Check if wide character is a white-space ";
		break;
		case kwd::opt354:
		//iswupper
		comment += "Check if wide character is uppercaseletter ";
		break;
		case kwd::opt355:
		//iswxdigit
		comment += "Check if wide character is hexadecimal digit ";
		break;
		case kwd::opt356:
		//towlower
		comment += "Convert uppercasewide character to lowercase kwd::";
		break;
		case kwd::opt357:
		//towupper
		comment += "Convert lowercasewide character to uppercase kwd::";
		break;
		case kwd::opt358:
		//iswctype
		comment += "Check if wide character has property ";
		break;
		case kwd::opt359:
		//towctrans
		comment += "Convert using transformation ";
		break;
		case kwd::opt360:
		//wctrans
		comment += "Return character transformation ";
		break;
		case kwd::opt361:
		//wctype
		comment += "Return character property ";
		break;
		case kwd::opt362:
		//wctrans_t
		comment += "Wide character transformation ";
		break;
		case kwd::opt363:
		//wctype_t
		comment += "Wide character type ";
		break;
		case kwd::opt364:
		//array
		comment += "Array class ";
		break;
		case kwd::opt365:
		//end
		comment += "Iterator to end ";
		break;
		case kwd::opt366:
		//bitset
		comment += "Bitset ";
		break;
		case kwd::opt367:
		//deque
		comment += "Double ended queue ";
		break;
		case kwd::opt368:
		//forward_list
		comment += "Forward list ";
		break;
		case kwd::opt369:
		//list
		comment += "List ";
		break;
		case kwd::opt370:
		//map
		comment += "Map ";
		break;
		case kwd::opt371:
		//multimap
		comment += "Multiple-key map ";
		break;
		case kwd::opt372:
		//queue
		comment += "FIFO queue ";
		break;
		case kwd::opt373:
		//priority_queue
		comment += "Priority queue ";
		break;
		case kwd::opt374:
		//set
		comment += "Set ";
		break;
		case kwd::opt375:
		//multiset
		comment += "Multiple-key set ";
		break;
		case kwd::opt376:
		//stack
		comment += "LIFO stack ";
		break;
		case kwd::opt377:
		//unordered_map
		comment += "Unordered Map ";
		break;
		case kwd::opt378:
		//unordered_multimap
		comment += "Unordered Multimap ";
		break;
		case kwd::opt379:
		//unordered_set
		comment += "Unordered Set ";
		break;
		case kwd::opt380:
		//unordered_multiset
		comment += "Unordered Multiset ";
		break;
		case kwd::opt381:
		//vector
		comment += "Vector ";
		break;
		case kwd::opt382:
		//vector<bool>
		comment += "Vector of bool ";
		break;
		case kwd::opt383:
		//atomic
		comment += "Atomic ";
		break;
		case kwd::opt384:
		//atomic_flag
		comment += "Atomic flag ";
		break;
		case kwd::opt385:
		//memory_order
		comment += "Memory order ";
		break;
		case kwd::opt386:
		//kill_dependency
		comment += "Kill dependency ";
		break;
		case kwd::opt387:
		//atomic_thread_fence
		comment += "Thread fence ";
		break;
		case kwd::opt388:
		//atomic_signal_fence
		comment += "Signal fence ";
		break;
		case kwd::opt389:
		//atomic_is_lock_free
		comment += "Is lock-free ";
		break;
		case kwd::opt390:
		//atomic_init
		comment += "Initialize atomic object ";
		break;
		case kwd::opt391:
		//atomic_store
		comment += "Modify contained value ";
		break;
		case kwd::opt392:
		//atomic_store_explicit
		comment += "Modify contained value (explicit memory order) ";
		break;
		case kwd::opt393:
		//atomic_load
		comment += "Read contained value ";
		break;
		case kwd::opt394:
		//atomic_load_explicit
		comment += "Read contained value (explicit memory order) ";
		break;
		case kwd::opt395:
		//atomic_exchange
		comment += "Read and modify contained value ";
		break;
		case kwd::opt396:
		//atomic_exchange_explicit
		comment += "Read and modify contained value (explicit memory order) ";
		break;
		case kwd::opt397:
		//atomic_compare_exchange_weak
		comment += "Compare and exchange contained value (weak) ";
		break;
		case kwd::opt398:
		//atomic_compare_exchange_weak_explicit
		comment += "Compare and exchange contained value (weak, explicit) ";
		break;
		case kwd::opt399:
		//atomic_compare_exchange_strong
		comment += "Compare and exchange contained value (strong) ";
		break;
		case kwd::opt400:
		//atomic_compare_exchange_strong_explicit
		comment += "Compare and exchange contained value (strong, explicit) ";
		break;
		case kwd::opt401:
		//atomic_fetch_add
		comment += "Add to contained value ";
		break;
		case kwd::opt402:
		//atomic_fetch_add_explicit
		comment += "Add to contained value (explicit memory order) ";
		break;
		case kwd::opt403:
		//atomic_fetch_sub
		comment += "Subtract from contained value ";
		break;
		case kwd::opt404:
		//atomic_fetch_sub_explicit
		comment += "Subtract from contained value (explicit memory order) ";
		break;
		case kwd::opt405:
		//atomic_fetch_and
		comment += "Apply bitwise AND to contained value ";
		break;
		case kwd::opt406:
		//atomic_fetch_and_explicit
		comment += "Apply bitwise AND to contained value (explicit memory order) ";
		break;
		case kwd::opt407:
		//atomic_fetch_or
		comment += "Apply bitwise OR to contained value ";
		break;
		case kwd::opt408:
		//atomic_fetch_or_explicit
		comment += "Apply bitwise OR to contained value (explicit memory order) ";
		break;
		case kwd::opt409:
		//atomic_fetch_xor
		comment += "Apply bitwise XOR to contained value ";
		break;
		case kwd::opt410:
		//atomic_fetch_xor_explicit
		comment += "Apply bitwise XOR to contained value (explicit memory order) ";
		break;
		case kwd::opt411:
		//atomic_flag_test_and_set
		comment += "Test and set atomic flag ";
		break;
		case kwd::opt412:
		//atomic_flag_test_and_set_explicit
		comment += "Test and set atomic flag (explicit memory order) ";
		break;
		case kwd::opt413:
		//atomic_flag_clear
		comment += "Clear atomic flag ";
		break;
		case kwd::opt414:
		//atomic_flag_clear_explicit
		comment += "Clear atomic flag (explicit memory order) ";
		break;
		case kwd::opt415:
		//ATOMIC_VAR_INIT
		comment += "Initialization of atomic variable ";
		break;
		case kwd::opt416:
		//ATOMIC_FLAG_INIT
		comment += "Initialization of atomic flag ";
		break;
		case kwd::opt417:
		//condition_variable
		comment += "Condition variable ";
		break;
		case kwd::opt418:
		//condition_variable_any
		comment += "Condition variable (any lock) ";
		break;
		case kwd::opt419:
		//cv_status
		comment += "Condition variable status ";
		break;
		case kwd::opt420:
		//notify_all_at_thread_exit
		comment += "Notify all at thread exit ";
		break;
		case kwd::opt421:
		//promise
		comment += "Promise ";
		break;
		case kwd::opt422:
		//packaged_task
		comment += "Packaged task ";
		break;
		case kwd::opt423:
		//future
		comment += "Future ";
		break;
		case kwd::opt424:
		//shared_future
		comment += "Shared future ";
		break;
		case kwd::opt425:
		//future_error
		comment += "Future error exception ";
		break;
		case kwd::opt426:
		//future_errc
		comment += "Error conditions for future objects ";
		break;
		case kwd::opt427:
		//future_status
		comment += "Return value for timed future operations ";
		break;
		case kwd::opt428:
		//launch
		comment += "Launching policy for async ";
		break;
		case kwd::opt429:
		//async
		comment += "Call function asynchronously ";
		break;
		case kwd::opt430:
		//future_category
		comment += "Return future category ";
		break;
		case kwd::opt431:
		//mutex
		comment += "Mutex class ";
		break;
		case kwd::opt432:
		//recursive_mutex
		comment += "Recursive mutex class ";
		break;
		case kwd::opt433:
		//timed_mutex
		comment += "Timed mutex class ";
		break;
		case kwd::opt434:
		//recursive_timed_mutex
		comment += "Recursive timed mutex ";
		break;
		case kwd::opt435:
		//lock_guard
		comment += "Lock guard ";
		break;
		case kwd::opt436:
		//unique_lock
		comment += "Unique lock ";
		break;
		case kwd::opt437:
		//once_flag
		comment += "Flag argument type for call_once ";
		break;
		case kwd::opt438:
		//adopt_lock_t
		comment += "Type of adopt_lock ";
		break;
		case kwd::opt439:
		//defer_lock_t
		comment += "Type of defer_lock ";
		break;
		case kwd::opt440:
		//try_to_lock_t
		comment += "Type of try_to_lock ";
		break;
		case kwd::opt441:
		//try_lock
		comment += "Try to lock multiple mutexes ";
		break;
		case kwd::opt442:
		//lock
		comment += "Lock multiple mutexes ";
		break;
		case kwd::opt443:
		//call_once
		comment += "Call function once ";
		break;
		case kwd::opt444:
		//thread
		comment += "Thread ";
		break;
		case kwd::opt445:
		//this_thread
		comment += "This thread ";
		break;
		case kwd::opt446:
		//all_of
		comment += "Test condition on all elements in range ";
		break;
		case kwd::opt447:
		//any_of
		comment += "Test if any element in range fulfills condition ";
		break;
		case kwd::opt448:
		//none_of
		comment += "Test if no elements fulfill condition ";
		break;
		case kwd::opt449:
		//for_each
		comment += "Apply function to range ";
		break;
		case kwd::opt450:
		//find
		comment += "Find value in range ";
		break;
		case kwd::opt451:
		//find_if
		comment += "Find element in range ";
		break;
		case kwd::opt452:
		//find_if_not
		comment += "Find element in range (negative condition) ";
		break;
		case kwd::opt453:
		//find_end
		comment += "Find last subsequence in range ";
		break;
		case kwd::opt454:
		//find_first_of
		comment += "Find element from set in range ";
		break;
		case kwd::opt455:
		//adjacent_find
		comment += "Find equal adjacent elements in range ";
		break;
		case kwd::opt456:
		//count
		comment += "Count appearances of value in range ";
		break;
		case kwd::opt457:
		//count_if
		comment += "Return number of elements in range satisfying condition ";
		break;
		case kwd::opt458:
		//mismatch
		comment += "Return first position where two ranges differ ";
		break;
		case kwd::opt459:
		//equal
		comment += "Test whether the elements in two ranges are equal ";
		break;
		case kwd::opt460:
		//is_permutation
		comment += "Test whether range is permutation of another ";
		break;
		case kwd::opt461:
		//search
		comment += "Search range for subsequence ";
		break;
		case kwd::opt462:
		//search_n
		comment += "Search range for elements ";
		break;
		case kwd::opt463:
		//copy
		comment += "Copy range of elements ";
		break;
		case kwd::opt464:
		//copy_n
		comment += "Copy elements ";
		break;
		case kwd::opt465:
		//copy_if
		comment += "Copy certain elements of range ";
		break;
		case kwd::opt466:
		//copy_backward
		comment += "Copy range of elements backward ";
		break;
		case kwd::opt467:
		//move
		comment += "Move range of elements ";
		break;
		case kwd::opt468:
		//move_backward
		comment += "Move range of elements backward ";
		break;
		case kwd::opt469:
		//swap
		comment += "Exchange values of two objects ";
		break;
		case kwd::opt470:
		//swap_ranges
		comment += "Exchange values of two ranges ";
		break;
		case kwd::opt471:
		//iter_swap
		comment += "Exchange values of objects pointed to by two iterators ";
		break;
		case kwd::opt472:
		//transform
		comment += "Transform range ";
		break;
		case kwd::opt473:
		//replace
		comment += "Replace value in range ";
		break;
		case kwd::opt474:
		//replace_if
		comment += "Replace values in range ";
		break;
		case kwd::opt475:
		//replace_copy
		comment += "Copy range replacing value ";
		break;
		case kwd::opt476:
		//replace_copy_if
		comment += "Copy range replacing value ";
		break;
		case kwd::opt477:
		//fill
		comment += "Fill range with value ";
		break;
		case kwd::opt478:
		//fill_n
		comment += "Fill sequence with value ";
		break;
		case kwd::opt479:
		//generate
		comment += "Generate values for range with function ";
		break;
		case kwd::opt480:
		//generate_n
		comment += "Generate values for sequence with function ";
		break;
		case kwd::opt481:
		//remove_if
		comment += "Remove elements from range ";
		break;
		case kwd::opt482:
		//remove_copy
		comment += "Copy range removing value ";
		break;
		case kwd::opt483:
		//remove_copy_if
		comment += "Copy range removing values ";
		break;
		case kwd::opt484:
		//unique
		comment += "Remove consecutive duplicates in range ";
		break;
		case kwd::opt485:
		//unique_copy
		comment += "Copy range removing duplicates ";
		break;
		case kwd::opt486:
		//reverse
		comment += "Reverse range ";
		break;
		case kwd::opt487:
		//reverse_copy
		comment += "Copy range reversed ";
		break;
		case kwd::opt488:
		//rotate
		comment += "Rotate left the elements in range ";
		break;
		case kwd::opt489:
		//rotate_copy
		comment += "Copy range rotated left ";
		break;
		case kwd::opt490:
		//random_shuffle
		comment += "Randomly rearrange elements in range ";
		break;
		case kwd::opt491:
		//shuffle
		comment += "Randomly rearrange elements in range using generator ";
		break;
		case kwd::opt492:
		//is_partitioned
		comment += "Test whether range is partitioned ";
		break;
		case kwd::opt493:
		//partition
		comment += "Partition range in two ";
		break;
		case kwd::opt494:
		//stable_partition
		comment += "Partition range in two - stable ordering ";
		break;
		case kwd::opt495:
		//partition_copy
		comment += "Partition range into two ";
		break;
		case kwd::opt496:
		//partition_point
		comment += "Get partition point ";
		break;
		case kwd::opt497:
		//sort
		comment += "Sort elements in range ";
		break;
		case kwd::opt498:
		//stable_sort
		comment += "Sort elements preserving order of equivalents ";
		break;
		case kwd::opt499:
		//partial_sort
		comment += "Partially sort elements in range ";
		break;
		case kwd::opt500:
		//partial_sort_copy
		comment += "Copy and partially sort range ";
		break;
		case kwd::opt501:
		//is_sorted
		comment += "Check whether range is sorted ";
		break;
		case kwd::opt502:
		//is_sorted_until
		comment += "Find first unsorted element in range ";
		break;
		case kwd::opt503:
		//nth_element
		comment += "Sort element in range ";
		break;
		case kwd::opt504:
		//lower_bound
		comment += "Return iterator to lower bound ";
		break;
		case kwd::opt505:
		//upper_bound
		comment += "Return iterator to upper bound ";
		break;
		case kwd::opt506:
		//equal_range
		comment += "Get subrange of equal elements ";
		break;
		case kwd::opt507:
		//binary_search
		comment += "Test if value exists in sorted sequence ";
		break;
		case kwd::opt508:
		//merge
		comment += "Merge sorted ranges ";
		break;
		case kwd::opt509:
		//inplace_merge
		comment += "Merge consecutive sorted ranges ";
		break;
		case kwd::opt510:
		//includes
		comment += "Test whether sorted range includes another sorted range ";
		break;
		case kwd::opt511:
		//set_union
		comment += "Union of two sorted ranges ";
		break;
		case kwd::opt512:
		//set_intersection
		comment += "Intersection of two sorted ranges ";
		break;
		case kwd::opt513:
		//set_difference
		comment += "Difference of two sorted ranges ";
		break;
		case kwd::opt514:
		//set_symmetric_difference
		comment += "Symmetric difference of two sorted ranges ";
		break;
		case kwd::opt515:
		//push_heap
		comment += "Push element into heap range ";
		break;
		case kwd::opt516:
		//pop_heap
		comment += "Pop element from heap range ";
		break;
		case kwd::opt517:
		//make_heap
		comment += "Make heap from range ";
		break;
		case kwd::opt518:
		//sort_heap
		comment += "Sort elements of heap ";
		break;
		case kwd::opt519:
		//is_heap
		comment += "Test if range is heap ";
		break;
		case kwd::opt520:
		//is_heap_until
		comment += "Find first element not in heap order ";
		break;
		case kwd::opt521:
		//min
		comment += "Return the smallest ";
		break;
		case kwd::opt522:
		//max
		comment += "Return the largest ";
		break;
		case kwd::opt523:
		//minmax
		comment += "Return smallest and largest elements ";
		break;
		case kwd::opt524:
		//min_element
		comment += "Return smallest element in range ";
		break;
		case kwd::opt525:
		//max_element
		comment += "Return largest element in range ";
		break;
		case kwd::opt526:
		//minmax_element
		comment += "Return smallest and largest elements in range ";
		break;
		case kwd::opt527:
		//lexicographical_compare
		comment += "Lexicographical less-than comparison ";
		break;
		case kwd::opt528:
		//next_permutation
		comment += "Transform range to next permutation ";
		break;
		case kwd::opt529:
		//prev_permutation
		comment += "Transform range to previous permutation ";
		break;
		case kwd::opt530:
		//duration
		comment += "Duration ";
		break;
		case kwd::opt531:
		//time_point
		comment += "Time point ";
		break;
		case kwd::opt532:
		//system_clock
		comment += "System clock ";
		break;
		case kwd::opt533:
		//steady_clock
		comment += "Steady clock ";
		break;
		case kwd::opt534:
		//high_resolution_clock
		comment += "High resolution clock ";
		break;
		case kwd::opt535:
		//treat_as_floating_point
		comment += "Treat as floating point ";
		break;
		case kwd::opt536:
		//duration_values
		comment += "Duration values ";
		break;
		case kwd::opt537:
		//common_type(duration)***
		comment += "Specialization of common_type for duration ";
		break;
		case kwd::opt538:
		//duration_cast
		comment += "Duration cast ";
		break;
		case kwd::opt539:
		//time_point_cast
		comment += "Time_point cast ";
		break;
		case kwd::opt540:
		//hours
		comment += "Duration in hours ";
		break;
		case kwd::opt541:
		//minutes
		comment += "Duration in minutes ";
		break;
		case kwd::opt542:
		//seconds
		comment += "Duration in seconds ";
		break;
		case kwd::opt543:
		//milliseconds
		comment += "Duration in milliseconds ";
		break;
		case kwd::opt544:
		//microseconds
		comment += "Duration in microseconds ";
		break;
		case kwd::opt545:
		//nanoseconds
		comment += "Duration in nanoseconds ";
		break;
		case kwd::opt546:
		//codecvt_mode
		comment += "Codecvt mode ";
		break;
		case kwd::opt547:
		//codecvt_utf8
		comment += "Convert UTF-8 ";
		break;
		case kwd::opt548:
		//codecvt_utf16
		comment += "Convert UTF-16 ";
		break;
		case kwd::opt549:
		//codecvt_utf8_utf16
		comment += "Convert between UTF-8 and UTF-16 ";
		break;
		case kwd::opt550:
		//complex
		comment += "Complex number class ";
		break;
		case kwd::opt551:
		//real
		comment += "Real part of complex ";
		break;
		case kwd::opt552:
		//imag
		comment += "Imaginary part of complex ";
		break;
		case kwd::opt553:
		//arg
		comment += "Phase angle of complex ";
		break;
		case kwd::opt554:
		//norm
		comment += "Norm of complex ";
		break;
		case kwd::opt555:
		//conj
		comment += "Complex conjugate ";
		break;
		case kwd::opt556:
		//polar
		comment += "Complex from polar components ";
		break;
		case kwd::opt557:
		//proj
		comment += "Complex projection. ";
		break;
		case kwd::opt558:
		//complexoperators
		comment += "Complex number operators ";
		break;
		case kwd::opt559:
		//exception
		comment += "Standard exception class ";
		break;
		case kwd::opt560:
		//bad_exception
		comment += "Exception thrown by unexpected handler ";
		break;
		case kwd::opt561:
		//nested_exception
		comment += "Nested exception class ";
		break;
		case kwd::opt562:
		//exception_ptr
		comment += "Exception pointer ";
		break;
		case kwd::opt563:
		//terminate_handler
		comment += "Type of terminate handler function ";
		break;
		case kwd::opt564:
		//unexpected_handler
		comment += "Type of unexpected handler function ";
		break;
		case kwd::opt565:
		//terminate
		comment += "Function handling termination on exception ";
		break;
		case kwd::opt566:
		//get_terminate
		comment += "Get terminate handler function ";
		break;
		case kwd::opt567:
		//set_terminate
		comment += "Set terminate handler function ";
		break;
		case kwd::opt568:
		//unexpected
		comment += "Function handling unexpected exceptions ";
		break;
		case kwd::opt569:
		//get_unexpected
		comment += "Get unexpected handler function ";
		break;
		case kwd::opt570:
		//set_unexpected
		comment += "Set unexpected handler function ";
		break;
		case kwd::opt571:
		//uncaught_exception
		comment += "Return exception status ";
		break;
		case kwd::opt572:
		//current_exception
		comment += "Get smart pointer to current exception ";
		break;
		case kwd::opt573:
		//rethrow_exception
		comment += "Rethrow exception ";
		break;
		case kwd::opt574:
		//make_exception_ptr
		comment += "Make exception_ptr ";
		break;
		case kwd::opt575:
		//throw_with_nested
		comment += "Throw with nested ";
		break;
		case kwd::opt576:
		//rethrow_if_nested
		comment += "Rethrow if nested ";
		break;
		case kwd::opt577:
		//unary_function
		comment += "Unary function object base class ";
		break;
		case kwd::opt578:
		//binary_function
		comment += "Binary function object base class ";
		break;
		case kwd::opt579:
		//initializer_list
		comment += "Initializer list ";
		break;
		case kwd::opt580:
		//advance
		comment += "Advance iterator ";
		break;
		case kwd::opt581:
		//distance
		comment += "Return distance between iterators ";
		break;
		case kwd::opt582:
		//prev
		comment += "Get iterator to previous element ";
		break;
		case kwd::opt583:
		//next
		comment += "Get iterator to next element ";
		break;
		case kwd::opt584:
		//back_inserter
		comment += "Construct back insert iterator ";
		break;
		case kwd::opt585:
		//front_inserter
		comment += "Constructs front insert iterator ";
		break;
		case kwd::opt586:
		//inserter
		comment += "Construct insert iterator ";
		break;
		case kwd::opt587:
		//make_move_iterator
		comment += "Construct move iterator ";
		break;
		case kwd::opt588:
		//iterator
		comment += "Iterator base class ";
		break;
		case kwd::opt589:
		//iterator_traits
		comment += "Iterator traits ";
		break;
		case kwd::opt590:
		//reverse_iterator
		comment += "Reverse iterator ";
		break;
		case kwd::opt591:
		//move_iterator
		comment += "Move iterator ";
		break;
		case kwd::opt592:
		//back_insert_iterator
		comment += "Back insert iterator ";
		break;
		case kwd::opt593:
		//front_insert_iterator
		comment += "Front insert iterator ";
		break;
		case kwd::opt594:
		//insert_iterator
		comment += "Insert iterator ";
		break;
		case kwd::opt595:
		//istream_iterator
		comment += "Istream iterator ";
		break;
		case kwd::opt596:
		//ostream_iterator
		comment += "Ostream iterator ";
		break;
		case kwd::opt597:
		//istreambuf_iterator
		comment += "Input stream buffer iterator ";
		break;
		case kwd::opt598:
		//ostreambuf_iterator
		comment += "Output stream buffer iterator ";
		break;
		case kwd::opt599:
		//input_iterator_tag
		comment += "Input iterator category ";
		break;
		case kwd::opt600:
		//output_iterator_tag
		comment += "Output iterator category ";
		break;
		case kwd::opt601:
		//forward_iterator_tag
		comment += "Forward iterator category ";
		break;
		case kwd::opt602:
		//bidirectional_iterator_tag
		comment += "Bidirectional iterator category ";
		break;
		case kwd::opt603:
		//random_access_iterator_tag
		comment += "Random-access iterator category ";
		break;
		case kwd::opt604:
		//numeric_limits
		comment += "Numeric limits type ";
		break;
		case kwd::opt605:
		//float_round_style
		comment += "Enum type for float rounding style ";
		break;
		case kwd::opt606:
		//float_denorm_style
		comment += "Enum type for float denormalization style ";
		break;
		case kwd::opt607:
		//use_facet
		comment += "Access facet of locale ";
		break;
		case kwd::opt608:
		//has_facet
		comment += "Check if locale has facet ";
		break;
		case kwd::opt609:
		//isalnum
		comment += "Check if character is alphanumeric ";
		break;
		case kwd::opt610:
		//locale
		comment += "Locale class ";
		break;
		case kwd::opt611:
		//ctype
		comment += "Character type facet ";
		break;
		case kwd::opt612:
		//ctype_byname
		comment += "Character type facet ";
		break;
		case kwd::opt613:
		//codecvt
		comment += "Convert codeset facet ";
		break;
		case kwd::opt614:
		//codecvt_byname
		comment += "Convert codeset facet ";
		break;
		case kwd::opt615:
		//num_get
		comment += "Facet to parse numeric values ";
		break;
		case kwd::opt616:
		//num_put
		comment += "Facet to format numeric values ";
		break;
		case kwd::opt617:
		//numpunct
		comment += "Numeric punctuation facet ";
		break;
		case kwd::opt618:
		//numpunct_byname
		comment += "Numeric puntuation facet ";
		break;
		case kwd::opt619:
		//collate
		comment += "Facet to compare and hash strings ";
		break;
		case kwd::opt620:
		//collate_byname
		comment += "Facet to compare and hash strings ";
		break;
		case kwd::opt621:
		//time_get
		comment += "Facet to parse dates and times ";
		break;
		case kwd::opt622:
		//time_get_byname
		comment += "Facet to parse dates and times ";
		break;
		case kwd::opt623:
		//time_put
		comment += "Facet to format dates and times ";
		break;
		case kwd::opt624:
		//time_put_byname
		comment += "Facet to format dates and times ";
		break;
		case kwd::opt625:
		//money_get
		comment += "Facet to parse monetary expressions ";
		break;
		case kwd::opt626:
		//money_put
		comment += "Facet to format monetary expressions ";
		break;
		case kwd::opt627:
		//moneypunct
		comment += "Monetary punctuation facet ";
		break;
		case kwd::opt628:
		//moneypunct_byname
		comment += "Monetary punctuation facet ";
		break;
		case kwd::opt629:
		//messages
		comment += "Facet to access message catalogs ";
		break;
		case kwd::opt630:
		//messages_byname
		comment += "Facet to access message catalogs ";
		break;
		case kwd::opt631:
		//ctype_base
		comment += "Base class for ctype ";
		break;
		case kwd::opt632:
		//codecvt_base
		comment += "Base class for codecvt ";
		break;
		case kwd::opt633:
		//time_base
		comment += "Base class for time_get ";
		break;
		case kwd::opt634:
		//money_base
		comment += "Base class for moneypunct ";
		break;
		case kwd::opt635:
		//allocator
		comment += "Default allocator ";
		break;
		case kwd::opt636:
		//allocator_arg
		comment += "Allocator arg ";
		break;
		case kwd::opt637:
		//allocator_arg_t
		comment += "Allocator arg type ";
		break;
		case kwd::opt638:
		//allocator_traits
		comment += "Allocator traits ";
		break;
		case kwd::opt639:
		//auto_ptr
		comment += "Automatic Pointer [deprecated] ";
		break;
		case kwd::opt640:
		//auto_ptr_ref
		comment += "Reference to automatic pointer ";
		break;
		case kwd::opt641:
		//shared_ptr
		comment += "Shared pointer ";
		break;
		case kwd::opt642:
		//weak_ptr
		comment += "Weak shared pointer ";
		break;
		case kwd::opt643:
		//unique_ptr
		comment += "Unique pointer ";
		break;
		case kwd::opt644:
		//default_delete
		comment += "Default deleter ";
		break;
		case kwd::opt645:
		//make_shared
		comment += "Make shared_ptr ";
		break;
		case kwd::opt646:
		//allocate_shared
		comment += "Allocate shared_ptr ";
		break;
		case kwd::opt647:
		//static_pointer_cast
		comment += "Static cast of shared_ptr ";
		break;
		case kwd::opt648:
		//dynamic_pointer_cast
		comment += "Dynamic cast of shared_ptr ";
		break;
		case kwd::opt649:
		//const_pointer_cast
		comment += "Const cast of shared_ptr ";
		break;
		case kwd::opt650:
		//get_deleter
		comment += "Get deleter from shared_ptr ";
		break;
		case kwd::opt651:
		//owner_less
		comment += "Owner-based less-than operation ";
		break;
		case kwd::opt652:
		//enable_shared_from_this
		comment += "Enable shared_from_this ";
		break;
		case kwd::opt653:
		//raw_storage_iterator
		comment += "Raw storage iterator ";
		break;
		case kwd::opt654:
		//get_temporary_buffer
		comment += "Get block of temporary memory ";
		break;
		case kwd::opt655:
		//return_temporary_buffer
		comment += "Return block of temporary memory ";
		break;
		case kwd::opt656:
		//uninitialized_copy
		comment += "Copy block of memory ";
		break;
		case kwd::opt657:
		//uninitialized_copy_n
		comment += "Copy block of memory ";
		break;
		case kwd::opt658:
		//uninitialized_fill
		comment += "Fill block of memory ";
		break;
		case kwd::opt659:
		//uninitialized_fill_n
		comment += "Fill block of memory ";
		break;
		case kwd::opt660:
		//pointer_traits
		comment += "Pointer traits ";
		break;
		case kwd::opt661:
		//pointer_safety
		comment += "Pointer safety enum ";
		break;
		case kwd::opt662:
		//declare_reachable
		comment += "Declare pointer as reachable ";
		break;
		case kwd::opt663:
		//undeclare_reachable
		comment += "Undeclare pointer as reachable ";
		break;
		case kwd::opt664:
		//declare_no_pointers
		comment += "Declare memory block as containing no pointers ";
		break;
		case kwd::opt665:
		//undeclare_no_pointers
		comment += "Undeclare memory block as containing no pointers ";
		break;
		case kwd::opt666:
		//get_pointer_safety
		comment += "Get pointer safety ";
		break;
		case kwd::opt667:
		//align
		comment += "Align in range ";
		break;
		case kwd::opt668:
		//addressof
		comment += "Address of object or function ";
		break;
		case kwd::opt669:
		//operatornew
		comment += "Allocate storage space ";
		break;
		case kwd::opt670:
		//operatornew[]
		comment += "Allocate storage space for array ";
		break;
		case kwd::opt671:
		//operatordelete
		comment += "Deallocate storage space ";
		break;
		case kwd::opt672:
		//operatordelete[]
		comment += "Deallocate storage space of array ";
		break;
		case kwd::opt673:
		//set_new_handler
		comment += "Set new handler function ";
		break;
		case kwd::opt674:
		//get_new_handler
		comment += "Get new handler function ";
		break;
		case kwd::opt675:
		//nothrow_t
		comment += "Nothrow type ";
		break;
		case kwd::opt676:
		//new_handler
		comment += "Type of new handler function ";
		break;
		case kwd::opt677:
		//bad_alloc
		comment += "Exception thrown on failure allocating memory ";
		break;
		case kwd::opt678:
		//bad_array_new_length
		comment += "Exception on bad array length ";
		break;
		case kwd::opt679:
		//nothrow
		comment += "Nothrow constant ";
		break;
		case kwd::opt680:
		//accumulate
		comment += "Accumulate values in range ";
		break;
		case kwd::opt681:
		//adjacent_difference
		comment += "Compute adjacent difference of range ";
		break;
		case kwd::opt682:
		//inner_product
		comment += "Compute cumulative inner product of range ";
		break;
		case kwd::opt683:
		//partial_sum
		comment += "Compute partial sums of range ";
		break;
		case kwd::opt684:
		//iota
		comment += "Store increasing sequence ";
		break;
		case kwd::opt685:
		//linear_congruential_engine
		comment += "Linear congruential random number engine ";
		break;
		case kwd::opt686:
		//mersenne_twister_engine
		comment += "Mersenne twister random number engine ";
		break;
		case kwd::opt687:
		//subtract_with_carry_engine
		comment += "Subtract-with-carry random number engine ";
		break;
		case kwd::opt688:
		//discard_block_engine
		comment += "Discard-block random number engine adaptor ";
		break;
		case kwd::opt689:
		//independent_bits_engine
		comment += "Independent-bits random number engine adaptor ";
		break;
		case kwd::opt690:
		//shuffle_order_engine
		comment += "Shuffle-order random number engine adaptor ";
		break;
		case kwd::opt691:
		//default_random_engine
		comment += "Default random engine ";
		break;
		case kwd::opt692:
		//minstd_rand
		comment += "Minimal Standard minstd_rand generator ";
		break;
		case kwd::opt693:
		//minstd_rand0
		comment += "Minimal Standard minstd_rand0 generator ";
		break;
		case kwd::opt694:
		//mt19937
		comment += "Mersenne Twister 19937 generator ";
		break;
		case kwd::opt695:
		//mt19937_64
		comment += "Mersenne Twister 19937 generator (64 bit) ";
		break;
		case kwd::opt696:
		//ranlux24_base
		comment += "Ranlux 24 base generator ";
		break;
		case kwd::opt697:
		//ranlux48_base
		comment += "Ranlux 48 base generator ";
		break;
		case kwd::opt698:
		//ranlux24
		comment += "Ranlux 24 generator ";
		break;
		case kwd::opt699:
		//ranlux48
		comment += "Ranlux 48 generator ";
		break;
		case kwd::opt700:
		//knuth_b
		comment += "Knuth-B generator ";
		break;
		case kwd::opt701:
		//random_device
		comment += "True random number generator ";
		break;
		case kwd::opt702:
		//uniform_int_distribution
		comment += "Uniform discrete distribution ";
		break;
		case kwd::opt703:
		//uniform_real_distribution
		comment += "Uniform real distribution ";
		break;
		case kwd::opt704:
		//bernoulli_distribution
		comment += "Bernoulli distribution ";
		break;
		case kwd::opt705:
		//binomial_distribution
		comment += "Binomial distribution ";
		break;
		case kwd::opt706:
		//geometric_distribution
		comment += "Geometric distribution ";
		break;
		case kwd::opt707:
		//negative_binomial_distribution
		comment += "Negative binomial distribution ";
		break;
		case kwd::opt708:
		//poisson_distribution
		comment += "Poisson distribution ";
		break;
		case kwd::opt709:
		//exponential_distribution
		comment += "Exponential distribution ";
		break;
		case kwd::opt710:
		//gamma_distribution
		comment += "Gamma distribution ";
		break;
		case kwd::opt711:
		//weibull_distribution
		comment += "Weibull distribution ";
		break;
		case kwd::opt712:
		//extreme_value_distribution
		comment += "Extreme Value distribution ";
		break;
		case kwd::opt713:
		//normal_distribution
		comment += "Normal distribution ";
		break;
		case kwd::opt714:
		//lognormal_distribution
		comment += "Lognormal distribution ";
		break;
		case kwd::opt715:
		//chi_squared_distribution
		comment += "Chi-squared distribution ";
		break;
		case kwd::opt716:
		//cauchy_distribution
		comment += "Cauchy distribution ";
		break;
		case kwd::opt717:
		//fisher_f_distribution
		comment += "Fisher F-distribution ";
		break;
		case kwd::opt718:
		//student_t_distribution
		comment += "Student T-Distribution ";
		break;
		case kwd::opt719:
		//discrete_distribution
		comment += "Discrete distribution ";
		break;
		case kwd::opt720:
		//piecewise_constant_distribution
		comment += "Piecewise constant distribution ";
		break;
		case kwd::opt721:
		//piecewise_linear_distribution
		comment += "Piecewise linear distribution ";
		break;
		case kwd::opt722:
		//seed_seq
		comment += "Seed sequence ";
		break;
		case kwd::opt723:
		//generate_canonical
		comment += "Generate canonical numbers ";
		break;
		case kwd::opt724:
		//ratio
		comment += "Ratio ";
		break;
		case kwd::opt725:
		//ratio_add
		comment += "Add two ratios ";
		break;
		case kwd::opt726:
		//ratio_subtract
		comment += "Subtract ratios ";
		break;
		case kwd::opt727:
		//ratio_multiply
		comment += "Multiply two ratios ";
		break;
		case kwd::opt728:
		//ratio_divide
		comment += "Divide ratios ";
		break;
		case kwd::opt729:
		//ratio_equal
		comment += "Compare ratios ";
		break;
		case kwd::opt730:
		//ratio_not_equal
		comment += "Compare ratios for inequality ";
		break;
		case kwd::opt731:
		//ratio_less
		comment += "Compare ratios for less-than inequality ";
		break;
		case kwd::opt732:
		//ratio_less_equal
		comment += "Compare ratios for equality or less-than inequality ";
		break;
		case kwd::opt733:
		//ratio_greater
		comment += "Compare ratios for greater than inequality ";
		break;
		case kwd::opt734:
		//ratio_greater_equal
		comment += "Compare ratios for equality or greater-than inequality ";
		break;
		case kwd::opt735:
		//regex_match
		comment += "Match sequence ";
		break;
		case kwd::opt736:
		//regex_search
		comment += "Search sequence ";
		break;
		case kwd::opt737:
		//regex_replace
		comment += "Replace matched sequence ";
		break;
		case kwd::opt738:
		//regex_iterator
		comment += "Regex iterator ";
		break;
		case kwd::opt739:
		//regex_token_iterator
		comment += "Regex token iterator ";
		break;
		case kwd::opt740:
		//basic_regex
		comment += "Regular expression ";
		break;
		case kwd::opt741:
		//match_results
		comment += "Match results ";
		break;
		case kwd::opt742:
		//sub_match
		comment += "Sub-expression match ";
		break;
		case kwd::opt743:
		//regex_traits
		comment += "Regex traits ";
		break;
		case kwd::opt744:
		//regex_error
		comment += "Regex exception ";
		break;
		case kwd::opt745:
		//regex
		comment += "Regex ";
		break;
		case kwd::opt746:
		//wregex
		comment += "Regex for wchar_t ";
		break;
		case kwd::opt747:
		//cmatch
		comment += "match_results for string literals ";
		break;
		case kwd::opt748:
		//wcmatch
		comment += "match_results for wide string literals ";
		break;
		case kwd::opt749:
		//smatch
		comment += "match_results for string objects ";
		break;
		case kwd::opt750:
		//wsmatch
		comment += "match_results for wide string objects ";
		break;
		case kwd::opt751:
		//csub_match
		comment += "sub_match for string literals ";
		break;
		case kwd::opt752:
		//wcsub_match
		comment += "sub_match for wide string literals ";
		break;
		case kwd::opt753:
		//ssub_match
		comment += "sub_match for strings ";
		break;
		case kwd::opt754:
		//wssub_match
		comment += "sub_match for wide strings ";
		break;
		case kwd::opt755:
		//regex_constants
		comment += "regex constants ";
		break;
		case kwd::opt756:
		//ECMAScriptsyntax
		comment += "ECMAScript regular expressions pattern syntax ";
		break;
		case kwd::opt757:
		//begin
		comment += "Iterator to beginning ";
		break;
		case kwd::opt758:
		//logic_error
		comment += "Logic error exception ";
		break;
		case kwd::opt759:
		//domain_error
		comment += "Domain error exception ";
		break;
		case kwd::opt760:
		//invalid_argument
		comment += "Invalid argument exception ";
		break;
		case kwd::opt761:
		//length_error
		comment += "Length error exception ";
		break;
		case kwd::opt762:
		//out_of_range
		comment += "Out-of-range exception ";
		break;
		case kwd::opt763:
		//runtime_error
		comment += "Runtime error exception ";
		break;
		case kwd::opt764:
		//range_error
		comment += "Range error exception ";
		break;
		case kwd::opt765:
		//overflow_error
		comment += "Overflow error exception ";
		break;
		case kwd::opt766:
		//underflow_error
		comment += "Underflow error exception ";
		break;
		case kwd::opt767:
		//basic_string
		comment += "Generic string class ";
		break;
		case kwd::opt768:
		//char_traits
		comment += "Character traits ";
		break;
		case kwd::opt769:
		//string
		comment += "String class ";
		break;
		case kwd::opt770:
		//u16string
		comment += "String of 16-bit characters ";
		break;
		case kwd::opt771:
		//u32string
		comment += "String of 32-bit characters ";
		break;
		case kwd::opt772:
		//wstring
		comment += "Wide string ";
		break;
		case kwd::opt773:
		//stoi
		comment += "Convert string to integer ";
		break;
		case kwd::opt774:
		//stol
		comment += "Convert string to long int ";
		break;
		case kwd::opt775:
		//stoul
		comment += "Convert string to unsigned integer ";
		break;
		case kwd::opt776:
		//stoll
		comment += "Convert string to long long ";
		break;
		case kwd::opt777:
		//stoull
		comment += "Convert string to unsigned long long ";
		break;
		case kwd::opt778:
		//stof
		comment += "Convert string to float ";
		break;
		case kwd::opt779:
		//stod
		comment += "Convert string to double ";
		break;
		case kwd::opt780:
		//stold
		comment += "Convert string to long double ";
		break;
		case kwd::opt781:
		//to_string
		comment += "Convert numerical value to string ";
		break;
		case kwd::opt782:
		//to_wstring
		comment += "Convert numerical value to wide string ";
		break;
		case kwd::opt783:
		//error_category
		comment += "Error category ";
		break;
		case kwd::opt784:
		//error_code
		comment += "Error code ";
		break;
		case kwd::opt785:
		//error_condition
		comment += "Error condition ";
		break;
		case kwd::opt786:
		//system_error
		comment += "System error exception ";
		break;
		case kwd::opt787:
		//is_error_code_enum
		comment += "error_code enum flag ";
		break;
		case kwd::opt788:
		//is_error_condition_enum
		comment += "error_condition enum flag ";
		break;
		case kwd::opt789:
		//errc
		comment += "Generic error conditions ";
		break;
		case kwd::opt790:
		//generic_category
		comment += "Return generic category ";
		break;
		case kwd::opt791:
		//system_category
		comment += "Return system category ";
		break;
		case kwd::opt792:
		//make_error_code
		comment += "Make error code ";
		break;
		case kwd::opt793:
		//make_error_condition
		comment += "Make error condition ";
		break;
		case kwd::opt794:
		//tuple
		comment += "Tuple ";
		break;
		case kwd::opt795:
		//tuple_size
		comment += "Tuple size traits ";
		break;
		case kwd::opt796:
		//tuple_element
		comment += "Tuple element type ";
		break;
		case kwd::opt797:
		//make_tuple
		comment += "Construct tuple ";
		break;
		case kwd::opt798:
		//forward_as_tuple
		comment += "Forward as tuple ";
		break;
		case kwd::opt799:
		//tie
		comment += "Tie arguments to tuple elements ";
		break;
		case kwd::opt800:
		//tuple_cat
		comment += "Concatenate tuples ";
		break;
		case kwd::opt801:
		//get
		comment += "Get element ";
		break;
		case kwd::opt802:
		//ignore
		comment += "Ignore assignment ";
		break;
		case kwd::opt803:
		//type_index
		comment += "Type index ";
		break;
		case kwd::opt804:
		//hash<;type_index>;
		comment += "Hash for type_index ";
		break;
		case kwd::opt805:
		//type_info
		comment += "Type information type ";
		break;
		case kwd::opt806:
		//bad_cast
		comment += "Exception thrown on failure to dynamic cast ";
		break;
		case kwd::opt807:
		//bad_typeid
		comment += "Exception thrown on typeid of null pointer ";
		break;
		case kwd::opt808:
		//integral_constant
		comment += "Integral constant ";
		break;
		case kwd::opt809:
		//true_type
		comment += "True type ";
		break;
		case kwd::opt810:
		//false_type
		comment += "False type ";
		break;
		case kwd::opt811:
		//is_array
		comment += "Is array ";
		break;
		case kwd::opt812:
		//is_class
		comment += "Is non-union class ";
		break;
		case kwd::opt813:
		//is_enum
		comment += "Is enum ";
		break;
		case kwd::opt814:
		//is_floating_point
		comment += "Is floating point ";
		break;
		case kwd::opt815:
		//is_function
		comment += "Is function ";
		break;
		case kwd::opt816:
		//is_integral
		comment += "Is integral ";
		break;
		case kwd::opt817:
		//is_lvalue_reference
		comment += "Is lvalue reference ";
		break;
		case kwd::opt818:
		//is_member_function_pointer
		comment += "Is member function pointer ";
		break;
		case kwd::opt819:
		//is_member_object_pointer
		comment += "Is member object pointer ";
		break;
		case kwd::opt820:
		//is_pointer
		comment += "Is pointer ";
		break;
		case kwd::opt821:
		//is_rvalue_reference
		comment += "Is rvalue reference ";
		break;
		case kwd::opt822:
		//is_union
		comment += "Is union ";
		break;
		case kwd::opt823:
		//is_void
		comment += "Is void ";
		break;
		case kwd::opt824:
		//is_arithmetic
		comment += "Is arithmetic type ";
		break;
		case kwd::opt825:
		//is_compound
		comment += "Is compound type ";
		break;
		case kwd::opt826:
		//is_fundamental
		comment += "Is fundamental type ";
		break;
		case kwd::opt827:
		//is_member_pointer
		comment += "Is member pointer type ";
		break;
		case kwd::opt828:
		//is_object
		comment += "Is object type ";
		break;
		case kwd::opt829:
		//is_reference
		comment += "Is reference type ";
		break;
		case kwd::opt830:
		//is_scalar
		comment += "Is scalar type ";
		break;
		case kwd::opt831:
		//is_abstract
		comment += "Is abstract class ";
		break;
		case kwd::opt832:
		//is_const
		comment += "Is const-qualified ";
		break;
		case kwd::opt833:
		//is_empty
		comment += "Is empty class ";
		break;
		case kwd::opt834:
		//is_literal_type
		comment += "Is literal type ";
		break;
		case kwd::opt835:
		//is_pod
		comment += "Is POD type ";
		break;
		case kwd::opt836:
		//is_polymorphic
		comment += "Is polymorphic ";
		break;
		case kwd::opt837:
		//is_signed
		comment += "Is signed type ";
		break;
		case kwd::opt838:
		//is_standard_layout
		comment += "Is standard-layout type ";
		break;
		case kwd::opt839:
		//is_trivial
		comment += "Is trivial type ";
		break;
		case kwd::opt840:
		//is_trivially_copyable
		comment += "Is trivially copyable ";
		break;
		case kwd::opt841:
		//is_unsigned
		comment += "Is unsigned type ";
		break;
		case kwd::opt842:
		//is_volatile
		comment += "Is volatile-qualified ";
		break;
		case kwd::opt843:
		//has_virtual_destructor
		comment += "Has virtual destructor ";
		break;
		case kwd::opt844:
		//is_assignable
		comment += "Is assignable ";
		break;
		case kwd::opt845:
		//is_constructible
		comment += "Is constructible ";
		break;
		case kwd::opt846:
		//is_copy_assignable
		comment += "Is copy assignable ";
		break;
		case kwd::opt847:
		//is_copy_constructible
		comment += "Is copy constructible ";
		break;
		case kwd::opt848:
		//is_destructible
		comment += "Is destructible ";
		break;
		case kwd::opt849:
		//is_default_constructible
		comment += "Is default constructible ";
		break;
		case kwd::opt850:
		//is_move_assignable
		comment += "Is move assignable ";
		break;
		case kwd::opt851:
		//is_move_constructible
		comment += "Is move constructible ";
		break;
		case kwd::opt852:
		//is_trivially_assignable
		comment += "Is trivially assignable ";
		break;
		case kwd::opt853:
		//is_trivially_constructible
		comment += "Is trivially constructible ";
		break;
		case kwd::opt854:
		//is_trivially_copy_assignable
		comment += "Is trivially copy assignable ";
		break;
		case kwd::opt855:
		//is_trivially_copy_constructible
		comment += "Is trivially copy constructible ";
		break;
		case kwd::opt856:
		//is_trivially_destructible
		comment += "Is trivially destructible ";
		break;
		case kwd::opt857:
		//is_trivially_default_constructible
		comment += "Is trivially default constructible ";
		break;
		case kwd::opt858:
		//is_trivially_move_assignable
		comment += "Is trivially move assignable ";
		break;
		case kwd::opt859:
		//is_trivially_move_constructible
		comment += "Is trivially move constructible ";
		break;
		case kwd::opt860:
		//is_nothrow_assignable
		comment += "Is assignable throwing no exceptions ";
		break;
		case kwd::opt861:
		//is_nothrow_constructible
		comment += "Is constructible throwing no exceptions ";
		break;
		case kwd::opt862:
		//is_nothrow_copy_assignable
		comment += "Is copy assignable throwing no exceptions ";
		break;
		case kwd::opt863:
		//is_nothrow_copy_constructible
		comment += "Is copy constructible throwing no exceptions ";
		break;
		case kwd::opt864:
		//is_nothrow_destructible
		comment += "Is nothrow destructible ";
		break;
		case kwd::opt865:
		//is_nothrow_default_constructible
		comment += "Is default constructible throwing no exceptions ";
		break;
		case kwd::opt866:
		//is_nothrow_move_assignable
		comment += "Is move assignable throwing no exception ";
		break;
		case kwd::opt867:
		//is_nothrow_move_constructible
		comment += "Is move constructible throwing no exceptions ";
		break;
		case kwd::opt868:
		//is_base_of
		comment += "Is base class of ";
		break;
		case kwd::opt869:
		//is_convertible
		comment += "Is convertible ";
		break;
		case kwd::opt870:
		//is_same
		comment += "Is same type ";
		break;
		case kwd::opt871:
		//alignment_of
		comment += "Alignment of ";
		break;
		case kwd::opt872:
		//extent
		comment += "Array dimension extent ";
		break;
		case kwd::opt873:
		//rank
		comment += "Array rank ";
		break;
		case kwd::opt874:
		//add_const
		comment += "Add const qualification ";
		break;
		case kwd::opt875:
		//add_cv
		comment += "Add const volatile qualification ";
		break;
		case kwd::opt876:
		//add_volatile
		comment += "Add volatile qualification ";
		break;
		case kwd::opt877:
		//remove_const
		comment += "Remove const qualification ";
		break;
		case kwd::opt878:
		//remove_cv
		comment += "Remove cv qualification ";
		break;
		case kwd::opt879:
		//remove_volatile
		comment += "Remove volatile qualification ";
		break;
		case kwd::opt880:
		//add_pointer
		comment += "Add pointer ";
		break;
		case kwd::opt881:
		//add_lvalue_reference
		comment += "Add lvalue reference ";
		break;
		case kwd::opt882:
		//add_rvalue_reference
		comment += "Add rvalue reference ";
		break;
		case kwd::opt883:
		//decay
		comment += "Decay type ";
		break;
		case kwd::opt884:
		//make_signed
		comment += "Make signed ";
		break;
		case kwd::opt885:
		//make_unsigned
		comment += "Make unsigned ";
		break;
		case kwd::opt886:
		//remove_all_extents
		comment += "Remove all array extents ";
		break;
		case kwd::opt887:
		//remove_extent
		comment += "Remove array extent ";
		break;
		case kwd::opt888:
		//remove_pointer
		comment += "Remove pointer ";
		break;
		case kwd::opt889:
		//remove_reference
		comment += "Remove reference ";
		break;
		case kwd::opt890:
		//underlying_type
		comment += "Underlying type of enum ";
		break;
		case kwd::opt891:
		//aligned_storage
		comment += "Aligned storage ";
		break;
		case kwd::opt892:
		//aligned_union
		comment += "Aligned union ";
		break;
		case kwd::opt893:
		//common_type
		comment += "Common type ";
		break;
		case kwd::opt894:
		//conditional
		comment += "Conditional type ";
		break;
		case kwd::opt895:
		//enable_if
		comment += "Enable type if condition is met ";
		break;
		case kwd::opt896:
		//result_of
		comment += "Result of call ";
		break;
		case kwd::opt897:
		//valarray
		comment += "Valarray class ";
		break;
		case kwd::opt898:
		//slice
		comment += "Valarray slice selector ";
		break;
		case kwd::opt899:
		//gslice
		comment += "Valarray generalized slice selector ";
		break;
		case kwd::opt900:
		//slice_array
		comment += "Valarray slice selection ";
		break;
		case kwd::opt901:
		//gslice_array
		comment += "Valarray gslice selection ";
		break;
		case kwd::opt902:
		//mask_array
		comment += "Valarray mask selection ";
		break;
		case kwd::opt903:
		//indirect_array
		comment += "Valarray indirect selection ";
		break;
		case kwd::opt904:
		//Valarray_operators
		comment += " ";
		break;
		case kwd::opt905: 
		//+
			comment += "added to ";
		break;
		case kwd::opt906: 
		//-
			comment += "subtracted from ";
		break;
		case kwd::opt907: 
		//'/'
			comment += "divided by ";
		break;
		case kwd::opt908: 
		//*
			comment += "multiplied with ";
		break;
		case kwd::opt909: 
		//%
			comment += "modulus of ";
		break;
		case kwd::opt910: 
		//<
			comment += "lesser than ";
		break;
		case kwd::opt911: 
		//>
			comment += "greater than ";
		break;
		case kwd::opt912: 
		//&
			comment += "and ";
		break;
		case kwd::opt913: 
		//|
			comment += "or ";
		break;
		case kwd::opt914: 
		//!
			comment += "not ";
		break;
		case kwd::opt915: 
		//?
			comment += "conditional not ";
		break;
		case kwd::opt916: 
		//^
			comment += "xor ";
		break;
		case kwd::opt917: 
		//~
			comment += "bitwise not ";
		break;
		case kwd::opt918: 
		// =
			comment += "assigned as ";
		break;
		case kwd::opt919: 
		//.
			comment += "access member ";
		break;
		case kwd::opt920: 
		//,
			comment += ", ";
		break;
		case kwd::opt921: 
		//(
			comment += "using( ";
		break;
		case kwd::opt922: 
		//)
			comment += ") ";
		break;
		case kwd::opt923: 
		//[
			comment += "open subscript ";
		break;
		case kwd::opt924: 
		//]
			comment += "close subscript ";
		break;
		case kwd::opt925: 
		//{
			comment += "opens loop/function ";
		break;
		case kwd::opt926: 
		//}
			comment += "closes loop/function ";
		break;
		case kwd::opt927: 
		//:
			comment += ": ";
		break;
		case kwd::opt928: 
		//;
			comment += " ";
		break;
		case kwd::opt929: 
		//"\\"
			comment += "escapes ";
		break;
		case kwd::opt930:
		//ios_base
		comment += "Base class for streams ";
		break;
		case kwd::opt931:
		//ios
		comment += "Base class for streams (type-dependent components) ";
		break;
		case kwd::opt932:
		//istream
		comment += "Input stream ";
		break;
		case kwd::opt933:
		//ostream
		comment += "Output Stream ";
		break;
		case kwd::opt934:
		//iostream
		comment += "Input/output stream ";
		break;
		case kwd::opt935:
		//ifstream
		comment += "Input file stream class ";
		break;
		case kwd::opt936:
		//ofstream
		comment += "Output file stream ";
		break;
		case kwd::opt937:
		//fstream
		comment += "Input/output file stream class ";
		break;
		case kwd::opt938:
		//istringstream
		comment += "Input string stream ";
		break;
		case kwd::opt939:
		//ostringstream
		comment += "Output string stream ";
		break;
		case kwd::opt940:
		//stringstream
		comment += "Input/output string stream ";
		break;
		case kwd::opt941:
		//streambuf
		comment += "Base buffer class for streams ";
		break;
		case kwd::opt942:
		//filebuf
		comment += "File stream buffer ";
		break;
		case kwd::opt943:
		//stringbuf
		comment += "String stream buffer ";
		break;
		case kwd::opt944:
		//cin
		comment += "Standard input stream ";
		break;
		case kwd::opt945:
		//cout
		comment += "Standard output stream ";
		break;
		case kwd::opt946:
		//cerr
		comment += "Standard output stream for errors ";
		break;
		case kwd::opt947:
		//clog
		comment += "Standard output stream for logging ";
		break;
		case kwd::opt948:
		//fpos
		comment += "Stream position class template ";
		break;
		case kwd::opt949:
		//streamoff
		comment += "Stream offset type ";
		break;
		case kwd::opt950:
		//streampos
		comment += "Stream position type ";
		break;
		case kwd::opt951:
		//streamsize
		comment += "Stream size type ";
		break;
		case kwd::opt952:
		//boolalpha
		comment += "Alphanumerical bool values ";
		break;
		case kwd::opt953:
		//dec
		comment += "Use decimal base ";
		break;
		case kwd::opt954:
		//endl
		comment += "Insert newline and flush ";
		break;
		case kwd::opt955:
		//ends
		comment += "Insert null character ";
		break;
		case kwd::opt956:
		//fixed
		comment += "Use fixed floating-point notation ";
		break;
		case kwd::opt957:
		//flush
		comment += "Flush stream buffer ";
		break;
		case kwd::opt958:
		//hex
		comment += "Use hexadecimal base ";
		break;
		case kwd::opt959:
		//internal
		comment += "Adjust field by inserting characters at an internal position ";
		break;
		case kwd::opt960:
		//left
		comment += "Adjust output to the left ";
		break;
		case kwd::opt961:
		//noboolalpha
		comment += "No alphanumerical bool values ";
		break;
		case kwd::opt962:
		//noshowbase
		comment += "Do not show numerical base prefixes ";
		break;
		case kwd::opt963:
		//noshowpoint
		comment += "Do not show decimal point ";
		break;
		case kwd::opt964:
		//noshowpos
		comment += "Do not show positive signs ";
		break;
		case kwd::opt965:
		//noskipws
		comment += "Do not skip whitespaces ";
		break;
		case kwd::opt966:
		//nounitbuf
		comment += "Do not force flushes after insertions ";
		break;
		case kwd::opt967:
		//nouppercase
		comment += "Do not generate upper case letters ";
		break;
		case kwd::opt968:
		//oct
		comment += "Use octal base ";
		break;
		case kwd::opt969:
		//resetiosflags
		comment += "Reset format flags ";
		break;
		case kwd::opt970:
		//right
		comment += "Adjust output to the right ";
		break;
		case kwd::opt971:
		//scientific
		comment += "Use scientific floating-point notation ";
		break;
		case kwd::opt972:
		//setbase
		comment += "Set basefield flag ";
		break;
		case kwd::opt973:
		//setfill
		comment += "Set fill character ";
		break;
		case kwd::opt974:
		//setiosflags
		comment += "Set format flags ";
		break;
		case kwd::opt975:
		//setprecision
		comment += "Set decimal precision ";
		break;
		case kwd::opt976:
		//setw
		comment += "Set field width ";
		break;
		case kwd::opt977:
		//showbase
		comment += "Show numerical base prefixes ";
		break;
		case kwd::opt978:
		//showpoint
		comment += "Show decimal point ";
		break;
		case kwd::opt979:
		//showpos
		comment += "Show positive signs ";
		break;
		case kwd::opt980:
		//skipws
		comment += "Skip whitespaces ";
		break;
		case kwd::opt981:
		//unitbuf
		comment += "Flush buffer after insertions ";
		break;
		case kwd::opt982:
		//uppercase
		comment += "Generate upper-case letters ";
		break;
		case kwd::opt983:
		//ws
		comment += "Extract whitespaces ";
		break;
		case kwd::opt984:
		//basic_ifstream
		comment += "Input file stream ";
		break;
		case kwd::opt985:
		//basic_ofstream
		comment += "Output file stream ";
		break;
		case kwd::opt986:
		//basic_fstream
		comment += "File stream ";
		break;
		case kwd::opt987:
		//basic_filebuf
		comment += "File stream buffer ";
		break;
		case kwd::opt988:
		//ifstream
		comment += "Input file stream class ";
		break;
		case kwd::opt989:
		//ofstream
		comment += "Output file stream ";
		break;
		case kwd::opt990:
		//fstream
		comment += "Input/output file stream class ";
		break;
		case kwd::opt991:
		//filebuf
		comment += "File stream buffer ";
		break;
		case kwd::opt992:
		//wifstream
		comment += "Input file stream (wide) ";
		break;
		case kwd::opt993:
		//wofstream
		comment += "Output file stream (wide) ";
		break;
		case kwd::opt994:
		//wfstream
		comment += "File stream (wide) ";
		break;
		case kwd::opt995:
		//wfilebuf
		comment += "File stream buffer (wide) ";
		break;
		case kwd::opt996:
		//setiosflags
		comment += "Set format flags ";
		break;
		case kwd::opt997:
		//resetiosflags
		comment += "Reset format flags ";
		break;
		case kwd::opt998:
		//setbase
		comment += "Set basefield flag ";
		break;
		case kwd::opt999:
		//setfill
		comment += "Set fill character ";
		break;
		case kwd::opt1000:
		//setprecision
		comment += "Set decimal precision ";
		break;
		case kwd::opt1001:
		//setw
		comment += "Set field width ";
		break;
		case kwd::opt1002:
		//get_money
		comment += "Get monetary value ";
		break;
		case kwd::opt1003:
		//put_money
		comment += "Put monetary value ";
		break;
		case kwd::opt1004:
		//get_time
		comment += "Get date and time ";
		break;
		case kwd::opt1005:
		//put_time
		comment += "Put date and time ";
		break;
		case kwd::opt1006:
		//basic_ios
		comment += "Base class for streams (type-dependent components) ";
		break;
		case kwd::opt1007:
		//fpos
		comment += "Stream position class template ";
		break;
		case kwd::opt1008:
		//ios
		comment += "Base class for streams (type-dependent components) ";
		break;
		case kwd::opt1009:
		//ios_base
		comment += "Base class for streams ";
		break;
		case kwd::opt1010:
		//wios
		comment += "Base class for wide character streams ";
		break;
		case kwd::opt1011:
		//io_errc
		comment += "Input/output error conditions ";
		break;
		case kwd::opt1012:
		//streamoff
		comment += "Stream offset type ";
		break;
		case kwd::opt1013:
		//streampos
		comment += "Stream position type ";
		break;
		case kwd::opt1014:
		//streamsize
		comment += "Stream size type ";
		break;
		case kwd::opt1015:
		//wstreampos
		comment += "Wide stream position type ";
		break;
		case kwd::opt1016:
		//boolalpha
		comment += "Alphanumerical bool values ";
		break;
		case kwd::opt1017:
		//showbase
		comment += "Show numerical base prefixes ";
		break;
		case kwd::opt1018:
		//showpoint
		comment += "Show decimal point ";
		break;
		case kwd::opt1019:
		//showpos
		comment += "Show positive signs ";
		break;
		case kwd::opt1020:
		//skipws
		comment += "Skip whitespaces ";
		break;
		case kwd::opt1021:
		//unitbuf
		comment += "Flush buffer after insertions ";
		break;
		case kwd::opt1022:
		//uppercase
		comment += "Generate upper-case letters ";
		break;
		case kwd::opt1023:
		//noboolalpha
		comment += "No alphanumerical bool values ";
		break;
		case kwd::opt1024:
		//noshowbase
		comment += "Do not show numerical base prefixes ";
		break;
		case kwd::opt1025:
		//noshowpoint
		comment += "Do not show decimal point ";
		break;
		case kwd::opt1026:
		//noshowpos
		comment += "Do not show positive signs ";
		break;
		case kwd::opt1027:
		//noskipws
		comment += "Do not skip whitespaces ";
		break;
		case kwd::opt1028:
		//nounitbuf
		comment += "Do not force flushes after insertions ";
		break;
		case kwd::opt1029:
		//nouppercase
		comment += "Do not generate upper case letters ";
		break;
		case kwd::opt1030:
		//dec
		comment += "Use decimal base ";
		break;
		case kwd::opt1031:
		//hex
		comment += "Use hexadecimal base ";
		break;
		case kwd::opt1032:
		//oct
		comment += "Use octal base ";
		break;
		case kwd::opt1033:
		//fixed
		comment += "Use fixed floating-point notation ";
		break;
		case kwd::opt1034:
		//scientific
		comment += "Use scientific floating-point notation ";
		break;
		case kwd::opt1035:
		//internal
		comment += "Adjust field by inserting characters at an internal position ";
		break;
		case kwd::opt1036:
		//left
		comment += "Adjust output to the left ";
		break;
		case kwd::opt1037:
		//right
		comment += "Adjust output to the right ";
		break;
		case kwd::opt1038:
		//iostream_category
		comment += "Return iostream category ";
		break;
		case kwd::opt1039:
		//cin
		comment += "Standard input stream ";
		break;
		case kwd::opt1040:
		//cout
		comment += "Standard output stream ";
		break;
		case kwd::opt1041:
		//cerr
		comment += "Standard output stream for errors ";
		break;
		case kwd::opt1042:
		//clog
		comment += "Standard output stream for logging ";
		break;
		case kwd::opt1043:
		//wcin
		comment += "Standard input stream (wide) ";
		break;
		case kwd::opt1044:
		//wcout
		comment += "Standard output stream (wide) ";
		break;
		case kwd::opt1045:
		//wcerr
		comment += "Standard output stream for errors (wide-oriented) ";
		break;
		case kwd::opt1046:
		//wclog
		comment += "Standard output stream for logging (wide) ";
		break;
		case kwd::opt1047:
		//basic_istream
		comment += "Input stream ";
		break;
		case kwd::opt1048:
		//basic_iostream
		comment += "Input/output stream ";
		break;
		case kwd::opt1049:
		//istream
		comment += "Input stream ";
		break;
		case kwd::opt1050:
		//iostream
		comment += "Input/output stream ";
		break;
		case kwd::opt1051:
		//wistream
		comment += "Input stream (wide) ";
		break;
		case kwd::opt1052:
		//wiostream
		comment += "Input/output stream (wide) ";
		break;
		case kwd::opt1053:
		//ws
		comment += "Extract whitespaces ";
		break;
		case kwd::opt1054:
		//basic_ostream
		comment += "Output stream ";
		break;
		case kwd::opt1055:
		//ostream
		comment += "Output Stream ";
		break;
		case kwd::opt1056:
		//wostream
		comment += "Output stream (wide) ";
		break;
		case kwd::opt1057:
		//endl
		comment += "Insert newline and flush ";
		break;
		case kwd::opt1058:
		//ends
		comment += "Insert null character ";
		break;
		case kwd::opt1059:
		//flush
		comment += "Flush stream buffer ";
		break;
		case kwd::opt1060:
		//basic_istringstream
		comment += "Input string stream ";
		break;
		case kwd::opt1061:
		//basic_ostringstream
		comment += "Output string stream ";
		break;
		case kwd::opt1062:
		//basic_stringstream
		comment += "String stream ";
		break;
		case kwd::opt1063:
		//basic_stringbuf
		comment += "String stream buffer ";
		break;
		case kwd::opt1064:
		//istringstream
		comment += "Input string stream ";
		break;
		case kwd::opt1065:
		//ostringstream
		comment += "Output string stream ";
		break;
		case kwd::opt1066:
		//stringstream
		comment += "Input/output string stream ";
		break;
		case kwd::opt1067:
		//stringbuf
		comment += "String stream buffer ";
		break;
		case kwd::opt1068:
		//wistringstream
		comment += "Input string stream (wide) ";
		break;
		case kwd::opt1069:
		//wostringstream
		comment += "Output string stream (wide) ";
		break;
		case kwd::opt1070:
		//wstringstream
		comment += "Input/output string stream (wide) ";
		break;
		case kwd::opt1071:
		//wstringbuf
		comment += "String stream buffer (wide) ";
		break;
		case kwd::opt1072:
		//basic_streambuf
		comment += "Base buffer class for streams ";
		break;
		case kwd::opt1073:
		//streambuf
		comment += "Base buffer class for streams ";
		break;
		case kwd::opt1074:
		//wstreambuf
		comment += "Base buffer class for streams (wide) ";
		break;
	}
	return comment;
}
