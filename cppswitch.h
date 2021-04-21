#include <string>
#include "enumvals.h"
#include <map>
using namespace std;
std::string commentMake(std::string commentarray[]) {
	int commentarraylen =sizeof(commentarray)/sizeof(commentarray[0]);
	kwd::Options resolveOption(string input);
	std::string comment = "";
	for(int i =0; i < commentarraylen; i++){
		switch (resolveOption(commentarray[i])){
		case kwd::Option_Invalid:
		comment += commentarray[i] + " ";
		break;
		case kwd::assert:
		comment += "Evaluate assertion ";
		break;
		case kwd::isalpha:
		comment += "Check if character is alphabetic ";
		break;
		case kwd::isblank:
		comment += "Check if character is blank ";
		break;
		case kwd::iscntrl:
		comment += "Check if character is a control character ";
		break;
		case kwd::isdigit:
		comment += "Check if character is decimal digit ";
		break;
		case kwd::isgraph:
		comment += "Check if character has graphical representation ";
		break;
		case kwd::islower:
		comment += "Check if character is lowercaseletter ";
		break;
		case kwd::isprint:
		comment += "Check if character is printable ";
		break;
		case kwd::ispunct:
		comment += "Check if character is a punctuation character ";
		break;
		case kwd::isspace:
		comment += "Check if character is a white-space ";
		break;
		case kwd::isupper:
		comment += "Check if character is uppercaseletter ";
		break;
		case kwd::isxdigit:
		comment += "Check if character is hexadecimal digit ";
		break;
		case kwd::tolower:
		comment += "Convert uppercaseletter to lowercase kwd::";
		break;
		case kwd::toupper:
		comment += "Convert lowercaseletter to uppercase kwd::";
		break;
		case kwd::errno:
		comment += "Last error number ";
		break;
		case kwd::feclearexcept:
		comment += "Clear floating-point exceptions ";
		break;
		case kwd::feraiseexcept:
		comment += "Raise floating-point exception ";
		break;
		case kwd::fegetexceptflag:
		comment += "Get floating-point exception flags ";
		break;
		case kwd::fesetexceptflag:
		comment += "Set floating-point exception flags ";
		break;
		case kwd::fegetround:
		comment += "Get rounding direction mode ";
		break;
		case kwd::fesetround:
		comment += "Set rounding direction mode ";
		break;
		case kwd::fegetenv:
		comment += "Get floating-point environment ";
		break;
		case kwd::fesetenv:
		comment += "Set floating-point environment ";
		break;
		case kwd::feholdexcept:
		comment += "Hold floating-point exceptions ";
		break;
		case kwd::feupdateenv:
		comment += "Update floating-point environment ";
		break;
		case kwd::fetestexcept:
		comment += "Test for floating-point exceptions ";
		break;
		case kwd::fenv_t:
		comment += "Floating-point environment type ";
		break;
		case kwd::fexcept_t:
		comment += "Floating-point exceptions type ";
		break;
		case kwd::FE_DIVBYZERO:
		comment += "Pole error exception ";
		break;
		case kwd::FE_INEXACT:
		comment += "Inexact result exception ";
		break;
		case kwd::FE_INVALID:
		comment += "Invalid argument exception ";
		break;
		case kwd::FE_OVERFLOW:
		comment += "Overflow range error exception ";
		break;
		case kwd::FE_UNDERFLOW:
		comment += "Underflow range error exception ";
		break;
		case kwd::FE_ALL_EXCEPT:
		comment += "All exceptions ";
		break;
		case kwd::FE_DOWNWARD:
		comment += "Downward rounding direction mode ";
		break;
		case kwd::FE_TONEAREST:
		comment += "To-nearest rounding direction mode ";
		break;
		case kwd::FE_TOWARDZERO:
		comment += "Toward-zero rounding direction mode ";
		break;
		case kwd::FE_UPWARD:
		comment += "Upward rounding direction mode ";
		break;
		case kwd::FE_DFL_ENV:
		comment += "Default environment ";
		break;
		case kwd::FENV_ACCESS:
		comment += "Access to Floating-point environment ";
		break;

		case kwd::climits:
		comment += "Sizes of integral types"
		break;
		
		case kwd::cfloa;:
		comment += "Characteristics of floating-point types ";
		break;
		case kwd::struct lconv:
		comment += " Formatting info for numeric values"
		break;
		case kwd::setlocale:
		comment += "Set or retrieve locale ";
		break;
		case kwd::localeconv:
		comment += "Get locale formatting parameters for quantities ";
		break;

		case kwd::cos:
		comment += "Compute cosine ";
		break;
		case kwd::sin:
		comment += "Compute sine ";
		break;
		case kwd::tan:
		comment += "Compute tangent ";
		break;
		case kwd::acos:
		comment += "Compute arc cosine ";
		break;
		case kwd::asin:
		comment += "Compute arc sine ";
		break;
		case kwd::atan:
		comment += "Compute arc tangent ";
		break;
		case kwd::atan2:
		comment += "Compute arc tangent with two parameters ";
		break;
		case kwd::cosh:
		comment += "Compute hyperbolic cosine ";
		break;
		case kwd::sinh:
		comment += "Compute hyperbolic sine ";
		break;
		case kwd::tanh:
		comment += "Compute hyperbolic tangent ";
		break;
		case kwd::acosh:
		comment += "Compute area hyperbolic cosine ";
		break;
		case kwd::asinh:
		comment += "Compute area hyperbolic sine ";
		break;
		case kwd::atanh:
		comment += "Compute area hyperbolic tangent ";
		break;
		case kwd::exp:
		comment += "Compute exponential function ";
		break;
		case kwd::frexp:
		comment += "Get significand and exponent ";
		break;
		case kwd::ldexp:
		comment += "Generate value from significand and exponent ";
		break;
		case kwd::log:
		comment += "Compute natural logarithm ";
		break;
		case kwd::log10:
		comment += "Compute common logarithm ";
		break;
		case kwd::modf:
		comment += "Break into fractional and integral parts ";
		break;
		case kwd::exp2:
		comment += "Compute binary exponential function ";
		break;
		case kwd::expm1:
		comment += "Compute exponential minus one ";
		break;
		case kwd::ilogb:
		comment += "Integer binary logarithm ";
		break;
		case kwd::log1p:
		comment += "Compute logarithm plus one ";
		break;
		case kwd::log2:
		comment += "Compute binary logarithm ";
		break;
		case kwd::logb:
		comment += "Compute floating-point base logarithm ";
		break;
		case kwd::scalbn:
		comment += "Scale significand using floating-point base exponent ";
		break;
		case kwd::scalbln:
		comment += "Scale significand using floating-point base exponent (long) ";
		break;
		case kwd::pow:
		comment += "Raise to power ";
		break;
		case kwd::sqrt:
		comment += "Compute square root ";
		break;
		case kwd::cbrt:
		comment += "Compute cubic root ";
		break;
		case kwd::hypot:
		comment += "Compute hypotenuse ";
		break;
		case kwd::erf:
		comment += "Compute error function ";
		break;
		case kwd::erfc:
		comment += "Compute complementary error function ";
		break;
		case kwd::tgamma:
		comment += "Compute gamma function ";
		break;
		case kwd::lgamma:
		comment += "Compute log-gamma function ";
		break;
		case kwd::ceil:
		comment += "Round up value ";
		break;
		case kwd::floor:
		comment += "Round down value ";
		break;
		case kwd::fmod:
		comment += "Compute remainder of division ";
		break;
		case kwd::trunc:
		comment += "Truncate value ";
		break;
		case kwd::round:
		comment += "Round to nearest ";
		break;
		case kwd::lround:
		comment += "Round to nearest and cast to long integer ";
		break;
		case kwd::llround:
		comment += "Round to nearest and cast to long long integer ";
		break;
		case kwd::rint:
		comment += "Round to integral value ";
		break;
		case kwd::lrint:
		comment += "Round and cast to long integer ";
		break;
		case kwd::llrint:
		comment += "Round and cast to long long integer ";
		break;
		case kwd::nearbyint:
		comment += "Round to nearby integral value ";
		break;
		case kwd::remainder:
		comment += "Compute remainder (IEC 60559) ";
		break;
		case kwd::remquo:
		comment += "Compute remainder and quotient ";
		break;
		case kwd::copysign:
		comment += "Copy sign ";
		break;
		case kwd::nan:
		comment += "Generate quiet NaN ";
		break;
		case kwd::nextafter:
		comment += "Next representable value ";
		break;
		case kwd::nexttoward:
		comment += "Next representable value toward precise value ";
		break;
		case kwd::fdim:
		comment += "Positive difference ";
		break;
		case kwd::fmax:
		comment += "Maximum value ";
		break;
		case kwd::fmin:
		comment += "Minimum value ";
		break;
		case kwd::fabs:
		comment += "Compute absolute value ";
		break;
		case kwd::abs:
		comment += "Compute absolute value ";
		break;
		case kwd::fma:
		comment += "Multiply-add ";
		break;
		case kwd::fpclassify:
		comment += "Classify floating-point value ";
		break;
		case kwd::isfinite:
		comment += "Is finite value ";
		break;
		case kwd::isinf:
		comment += "Is infinity ";
		break;
		case kwd::isnan:
		comment += "Is Not-A-Number ";
		break;
		case kwd::isnormal:
		comment += "Is normal ";
		break;
		case kwd::signbit:
		comment += "Sign bit ";
		break;
		case kwd::isgreater:
		comment += "Is greater ";
		break;
		case kwd::isgreaterequal:
		comment += "Is greater or equal ";
		break;
		case kwd::isless:
		comment += "Is less ";
		break;
		case kwd::islessequal:
		comment += "Is less or equal ";
		break;
		case kwd::islessgreater:
		comment += "Is less or greater ";
		break;
		case kwd::isunordered:
		comment += "Is unordered ";
		break;
		case kwd::math_errhandling:
		comment += "Error handling ";
		break;
		case kwd::INFINITY:
		comment += "Infinity ";
		break;
		case kwd::NAN:
		comment += "Not-A-Number ";
		break;
		case kwd::HUGE_VAL:
		comment += "Huge value ";
		break;
		case kwd::HUGE_VALF:
		comment += "Huge float valueHuge long double value ";
		break;
		case kwd::HUGE_VALL:
		comment += "Huge float valueHuge long double value ";
		break;
		case kwd::double_t:
		comment += "Floating-point type ";
		break;
		case kwd::float_t:
		comment += "Floating-point type ";
		break;

		case kwd::longjmp:
		comment += "Long jump ";
		break;
		case kwd::setjmp:
		comment += "Save calling environment for long jump ";
		break;
		case kwd::jmp_buf:
		comment += "Type to hold information to restore calling environment ";
		break;

		case kwd::signal:
		comment += "Set function to handle signal ";
		break;
		case kwd::raise:
		comment += "Generates a signal ";
		break;
		case kwd::sig_atomic_t:
		comment += "Integral type ";
		break;

		case kwd::va_list:
		comment += "Type to hold information about variable arguments ";
		break;
		case kwd::va_start:
		comment += "Initialize a variable argument list ";
		break;
		case kwd::va_arg:
		comment += "Retrieve next argument ";
		break;
		case kwd::va_end:
		comment += "End using variable argument list ";
		break;
		case kwd::va_copy:
		comment += "Copy variable argument list ";
		break;

		case kwd::ptrdiff_t:
		comment += "Result of pointer subtraction ";
		break;
		case kwd::size_t:
		comment += "Unsigned integral type ";
		break;
		case kwd::max_align_t:
		comment += "Type with widest scalar alignment ";
		break;
		case kwd::nullptr_t:
		comment += "Null pointer type (C++) ";
		break;
		case kwd::offsetof:
		comment += "Return member offset ";
		break;
		case kwd::NULL:
		comment += "Null pointer ";
		break;
		case kwd::remove:
		comment += "Remove value or file ";
		break;
		case kwd::rename:
		comment += "Rename file ";
		break;
		case kwd::tmpfile:
		comment += "Open a temporary file ";
		break;
		case kwd::tmpnam:
		comment += "Generate temporary filename ";
		break;
		case kwd::fclose:
		comment += "Close file ";
		break;
		case kwd::fflush:
		comment += "Flush stream ";
		break;
		case kwd::fopen:
		comment += "Open file ";
		break;
		case kwd::freopen:
		comment += "Reopen stream with different file or mode ";
		break;
		case kwd::setbuf:
		comment += "Set stream buffer ";
		break;
		case kwd::setvbuf:
		comment += "Change stream buffering ";
		break;
		case kwd::fprintf:
		comment += "Write formatted data to stream ";
		break;
		case kwd::fscanf:
		comment += "Read formatted data from stream ";
		break;
		case kwd::printf:
		comment += "Print formatted data to stdout ";
		break;
		case kwd::scanf:
		comment += "Read formatted data from stdin ";
		break;
		case kwd::snprintf:
		comment += "Write formatted output to sized buffer ";
		break;
		case kwd::sprintf:
		comment += "Write formatted data to string ";
		break;
		case kwd::sscanf:
		comment += "Read formatted data from string ";
		break;
		case kwd::vfprintf:
		comment += "Write formatted data from variable argument list to stream ";
		break;
		case kwd::vfscanf:
		comment += "Read formatted data from stream into variable argument list ";
		break;
		case kwd::vprintf:
		comment += "Print formatted data from variable argument list to stdout ";
		break;
		case kwd::vscanf:
		comment += "Read formatted data into variable argument list ";
		break;
		case kwd::vsnprintf:
		comment += "Write formatted data from variable argument list to sized buffer ";
		break;
		case kwd::vsprintf:
		comment += "Write formatted data from variable argument list to string ";
		break;
		case kwd::vsscanf:
		comment += "Read formatted data from string into variable argument list ";
		break;
		case kwd::fgetc:
		comment += "Get character from stream ";
		break;
		case kwd::fgets:
		comment += "Get string from stream ";
		break;
		case kwd::fputc:
		comment += "Write character to stream ";
		break;
		case kwd::fputs:
		comment += "Write string to stream ";
		break;
		case kwd::getc:
		comment += "Get character from stream ";
		break;
		case kwd::getchar:
		comment += "Get character from stdin ";
		break;
		case kwd::gets:
		comment += "Get string from stdin ";
		break;
		case kwd::putc:
		comment += "Write character to stream ";
		break;
		case kwd::putchar:
		comment += "Write character to stdout ";
		break;
		case kwd::puts:
		comment += "Write string to stdout ";
		break;
		case kwd::ungetc:
		comment += "Unget character from stream ";
		break;
		case kwd::fread:
		comment += "Read block of data from stream ";
		break;
		case kwd::fwrite:
		comment += "Write block of data to stream ";
		break;
		case kwd::fgetpos:
		comment += "Get current position in stream ";
		break;
		case kwd::fseek:
		comment += "Reposition stream position indicator ";
		break;
		case kwd::fsetpos:
		comment += "Set position indicator of stream ";
		break;
		case kwd::ftell:
		comment += "Get current position in stream ";
		break;
		case kwd::rewind:
		comment += "Set position of stream to the beginning ";
		break;
		case kwd::clearerr:
		comment += "Clear error indicators ";
		break;
		case kwd::feof:
		comment += "Check end-of-file indicator ";
		break;
		case kwd::ferror:
		comment += "Check error indicator ";
		break;
		case kwd::perror:
		comment += "Print error message ";
		break;
		case kwd::BUFSIZ:
		comment += "Buffer size ";
		break;
		case kwd::EOF:
		comment += "End-of-File ";
		break;
		case kwd::FILENAME_MAX:
		comment += "Maximum length of file names ";
		break;
		case kwd::FOPEN_MAX:
		comment += "Potential limit of simultaneous open streams ";
		break;
		case kwd::L_tmpnam:
		comment += "Minimum length for temporary file name ";
		break;
		case kwd::TMP_MAX:
		comment += "Number of temporary files ";
		break;
		case kwd::FILE:
		comment += "Object containing information to control a stream ";
		break;
		case kwd::fpos_t:
		comment += "Object containing information to specify a position within a file ";
		break;
		case kwd::atof:
		comment += "Convert string to double ";
		break;
		case kwd::atoi:
		comment += "Convert string to integer ";
		break;
		case kwd::atol:
		comment += "Convert string to long integer ";
		break;
		case kwd::atoll:
		comment += "Convert string to long long integer ";
		break;
		case kwd::strtod:
		comment += "Convert string to double ";
		break;
		case kwd::strtof:
		comment += "Convert string to float ";
		break;
		case kwd::strtol:
		comment += "Convert string to long integer ";
		break;
		case kwd::strtold:
		comment += "Convert string to long double ";
		break;
		case kwd::strtoll:
		comment += "Convert string to long long integer ";
		break;
		case kwd::strtoul:
		comment += "Convert string to unsigned long integer ";
		break;
		case kwd::strtoull:
		comment += "Convert string to unsigned long long integer ";
		break;
		case kwd::rand:
		comment += "Generate random number ";
		break;
		case kwd::srand:
		comment += "Initialize random number generator ";
		break;
		case kwd::calloc:
		comment += "Allocate and zero-initialize array ";
		break;
		case kwd::free:
		comment += "Deallocate memory block ";
		break;
		case kwd::malloc:
		comment += "Allocate memory block ";
		break;
		case kwd::realloc:
		comment += "Reallocate memory block ";
		break;
		case kwd::abort:
		comment += "Abort current process ";
		break;
		case kwd::atexit:
		comment += "Set function to be executed on exit ";
		break;
		case kwd::at_quick_exit:
		comment += "Set function to be executed on quick exit ";
		break;
		case kwd::exit:
		comment += "Terminate calling process ";
		break;
		case kwd::getenv:
		comment += "Get environment string ";
		break;
		case kwd::quick_exit:
		comment += "Terminate calling process quick ";
		break;
		case kwd::system:
		comment += "Execute system command ";
		break;
		case kwd::_Exit:
		comment += "Terminate calling process ";
		break;
		case kwd::bsearch:
		comment += "Binary search in array ";
		break;
		case kwd::qsort:
		comment += "Sort elements of array ";
		break;
		case kwd::div:
		comment += "Integral division ";
		break;
		case kwd::labs:
		comment += "Absolute value ";
		break;
		case kwd::ldiv:
		comment += "Integral division ";
		break;
		case kwd::llabs:
		comment += "Absolute value ";
		break;
		case kwd::lldiv:
		comment += "Integral division ";
		break;
		case kwd::mblen:
		comment += "Get length of multibyte character ";
		break;
		case kwd::mbtowc:
		comment += "Convert multibyte sequence to wide character ";
		break;
		case kwd::wctomb:
		comment += "Convert wide character to multibyte sequence ";
		break;
		case kwd::mbstowcs:
		comment += "Convert multibyte string to wide-character string ";
		break;
		case kwd::wcstombs:
		comment += "Convert wide-character string to multibyte string ";
		break;
		case kwd::EXIT_FAILURE:
		comment += "Failure termination code ";
		break;
		case kwd::EXIT_SUCCESS:
		comment += "Success termination code ";
		break;
		case kwd::MB_CUR_MAX:
		comment += "Maximum size of multibyte characters ";
		break;
		case kwd::RAND_MAX:
		comment += "Maximum value returned by rand ";
		break;
		case kwd::div_t:
		comment += "Structure returned by div ";
		break;
		case kwd::ldiv_t:
		comment += "Structure returned by ldiv ";
		break;
		case kwd::lldiv_t:
		comment += "Structure returned by lldiv ";
		break;
		case kwd::memcpy:
		comment += "Copy block of memory ";
		break;
		case kwd::memmove:
		comment += "Move block of memory ";
		break;
		case kwd::strcpy:
		comment += "Copy string ";
		break;
		case kwd::strncpy:
		comment += "Copy characters from string ";
		break;
		case kwd::strcat:
		comment += "Concatenate strings ";
		break;
		case kwd::strncat:
		comment += "Append characters from string ";
		break;
		case kwd::memcmp:
		comment += "Compare two blocks of memory ";
		break;
		case kwd::strcmp:
		comment += "Compare two strings ";
		break;
		case kwd::strcoll:
		comment += "Compare two strings using locale ";
		break;
		case kwd::strncmp:
		comment += "Compare characters of two strings ";
		break;
		case kwd::strxfrm:
		comment += "Transform string using locale ";
		break;
		case kwd::memchr:
		comment += "Locate character in block of memory ";
		break;
		case kwd::strchr:
		comment += "Locate first occurrence of character in string ";
		break;
		case kwd::strcspn:
		comment += "Get span until character in string ";
		break;
		case kwd::strpbrk:
		comment += "Locate characters in string ";
		break;
		case kwd::strrchr:
		comment += "Locate last occurrence of character in string ";
		break;
		case kwd::strspn:
		comment += "Get span of character set in string ";
		break;
		case kwd::strstr:
		comment += "Locate substring ";
		break;
		case kwd::strtok:
		comment += "Split string into tokens ";
		break;
		case kwd::memset:
		comment += "Fill block of memory ";
		break;
		case kwd::strerror:
		comment += "Get pointer to error message string ";
		break;
		case kwd::strlen:
		comment += "Get string length ";
		break;
		case kwd::clock:
		comment += "Clock program ";
		break;
		case kwd::difftime:
		comment += "Return difference between two times ";
		break;
		case kwd::mktime:
		comment += "Convert tm structure to time_t ";
		break;
		case kwd::time:
		comment += "Get current time ";
		break;
		case kwd::asctime:
		comment += "Convert tm structure to string ";
		break;
		case kwd::ctime:
		comment += "Convert time_t value to string ";
		break;
		case kwd::gmtime:
		comment += "Convert time_t to tm as UTC time ";
		break;
		case kwd::localtime:
		comment += "Convert time_t to tm as local time ";
		break;
		case kwd::strftime:
		comment += "Format time as string ";
		break;
		case kwd::CLOCKS_PER_SEC:
		comment += "Clock ticks per second ";
		break;
		case kwd::clock_t:
		comment += "Clock type ";
		break;
		case kwd::time_t:
		comment += "Time type ";
		break;
		case kwd::struct tm:
		comment += "Time structure "
		break;

		case kwd::c16rtomb:
		comment += "Convert 16-bit character to multibyte sequence ";
		break;
		case kwd::c32rtomb:
		comment += "Convert 32-bit character to multibyte sequence ";
		break;
		case kwd::mbrtoc16:
		comment += "Convert multibyte sequence to 16-bit character ";
		break;
		case kwd::mbrtoc32:
		comment += "Convert multibyte sequence to 32-bit character ";
		break;

		case kwd::fgetwc:
		comment += "Get wide character from stream ";
		break;
		case kwd::fgetws:
		comment += "Get wide string from stream ";
		break;
		case kwd::fputwc:
		comment += "Write wide character to stream ";
		break;
		case kwd::fputws:
		comment += "Write wide string to stream ";
		break;
		case kwd::fwide:
		comment += "Stream orientation ";
		break;
		case kwd::fwprintf:
		comment += "Write formatted data to stream ";
		break;
		case kwd::fwscanf:
		comment += "Read formatted data from stream ";
		break;
		case kwd::getwc:
		comment += "Get wide character from stream ";
		break;
		case kwd::getwchar:
		comment += "Get wide character from stdin ";
		break;
		case kwd::putwc:
		comment += "Write wide character to stream ";
		break;
		case kwd::putwchar:
		comment += "Write wide character to stdout ";
		break;
		case kwd::swprintf:
		comment += "Write formatted data to wide string ";
		break;
		case kwd::swscanf:
		comment += "Read formatted data from string ";
		break;
		case kwd::ungetwc:
		comment += "Unget wide character from stream ";
		break;
		case kwd::vfwprintf:
		comment += "Write formatted data from variable argument list to stream ";
		break;
		case kwd::vfwscanf:
		comment += "Read formatted data from stream into variable argument list ";
		break;
		case kwd::vswprintf:
		comment += "Write formatted data from variable argument list to sized buffer ";
		break;
		case kwd::vswscanf:
		comment += "Read formatted data from wide string into variable argument list ";
		break;
		case kwd::vwprintf:
		comment += "Print formatted data from variable argument list to stdout ";
		break;
		case kwd::vwscanf:
		comment += "Read formatted data into variable argument list ";
		break;
		case kwd::wprintf:
		comment += "Print formatted data to stdout ";
		break;
		case kwd::wscanf:
		comment += "Read formatted data from stdin ";
		break;
		case kwd::wcstod:
		comment += "Convert wide string to double ";
		break;
		case kwd::wcstof:
		comment += "Convert wide string to float ";
		break;
		case kwd::wcstol:
		comment += "Convert wide string to long integer ";
		break;
		case kwd::wcstold:
		comment += "Convert wide string to long double ";
		break;
		case kwd::wcstoll:
		comment += "Convert wide string to long long integer ";
		break;
		case kwd::wcstoul:
		comment += "Convert wide string to unsigned long integer ";
		break;
		case kwd::wcstoull:
		comment += "Convert wide string to unsigned long long integer ";
		break;
		case kwd::btowc:
		comment += "Convert single byte character to wide character ";
		break;
		case kwd::mbrlen:
		comment += "Get length of multibyte character ";
		break;
		case kwd::mbrtowc:
		comment += "Convert multibyte sequence to wide character ";
		break;
		case kwd::mbsinit:
		comment += "Check if initial conversion state ";
		break;
		case kwd::mbsrtowcs:
		comment += "Convert multibyte string to wide-character string ";
		break;
		case kwd::wcrtomb:
		comment += "Convert wide character to multibyte sequence ";
		break;
		case kwd::wctob:
		comment += "Convert wide character to single byte ";
		break;
		case kwd::wcsrtombs:
		comment += "Convert wide-character string to multibyte string ";
		break;
		case kwd::wcscat:
		comment += "Concatenate wide strings ";
		break;
		case kwd::wcschr:
		comment += "Locate first occurrence of character in wide string ";
		break;
		case kwd::wcscmp:
		comment += "Compare two strings ";
		break;
		case kwd::wcscoll:
		comment += "Compare two wide strings using locale ";
		break;
		case kwd::wcscpy:
		comment += "Copy wide string ";
		break;
		case kwd::wcscspn:
		comment += "Get span until character in wide string ";
		break;
		case kwd::wcslen:
		comment += "Get wide string length ";
		break;
		case kwd::wcsncat:
		comment += "Append characters from wide string ";
		break;
		case kwd::wcsncmp:
		comment += "Compare characters of two wide strings ";
		break;
		case kwd::wcsncpy:
		comment += "Copy characters from wide string ";
		break;
		case kwd::wcspbrk:
		comment += "Locate characters in wide string ";
		break;
		case kwd::wcsrchr:
		comment += "Locate last occurrence of character in wide string ";
		break;
		case kwd::wcsspn:
		comment += "Get span of character set in wide string ";
		break;
		case kwd::wcsstr:
		comment += "Locate substring of wide string ";
		break;
		case kwd::wcstok:
		comment += "Split wide string into tokens ";
		break;
		case kwd::wcsxfrm:
		comment += "Transform wide string using locale ";
		break;
		case kwd::wmemchr:
		comment += "Locate character in block of wide characters ";
		break;
		case kwd::wmemcmp:
		comment += "Compare two blocks of wide characters ";
		break;
		case kwd::wmemcpy:
		comment += "Copy block of wide characters ";
		break;
		case kwd::wmemmove:
		comment += "Move block of wide characters ";
		break;
		case kwd::wmemset:
		comment += "Fill array of wide characters ";
		break;
		case kwd::wcsftime:
		comment += "Format time as wide string ";
		break;
		case kwd::mbstate_t:
		comment += "Multibyte conversion state ";
		break;
		case kwd::wchar_t:
		comment += "Wide character ";
		break;
		case kwd::wint_t:
		comment += "Wide int type (header/type)";
		break;
		case kwd::WCHAR_MAX:
		comment += "Maximum value of wchar_t ";
		break;
		case kwd::WCHAR_MIN:
		comment += "Minimum value of wchar_t ";
		break;
		case kwd::WEOF:
		comment += "Wide end-of-file ";
		break;

		case kwd::iswalnum:
		comment += "Check if wide character is alphanumeric ";
		break;
		case kwd::iswalpha:
		comment += "Check if wide character is alphabetic ";
		break;
		case kwd::iswblank:
		comment += "Check if wide character is blank ";
		break;
		case kwd::iswcntrl:
		comment += "Check if wide character is a control character ";
		break;
		case kwd::iswdigit:
		comment += "Check if wide character is decimal digit ";
		break;
		case kwd::iswgraph:
		comment += "Check if wide character has graphical representation ";
		break;
		case kwd::iswlower:
		comment += "Check if wide character is lowercaseletter" ;
		break;
		case kwd::iswprint:
		comment += "Check if wide character is printable ";
		break;
		case kwd::iswpunct:
		comment += "Check if wide character is punctuation character ";
		break;
		case kwd::iswspace:
		comment += "Check if wide character is a white-space ";
		break;
		case kwd::iswupper:
		comment += "Check if wide character is uppercaseletter" ;
		break;
		case kwd::iswxdigit:
		comment += "Check if wide character is hexadecimal digit ";
		break;
		case kwd::towlower:
		comment += "Convert uppercasewide character to lowercase case"
		break;
		case kwd::towupper:
		comment += "Convert lowercasewide character to uppercase case"
		break;
		case kwd::iswctype:
		comment += "Check if wide character has property ";
		break;
		case kwd::towctrans:
		comment += "Convert using transformation ";
		break;
		case kwd::wctrans:
		comment += "Return character transformation ";
		break;
		case kwd::wctype:
		comment += "Return character property ";
		break;
		case kwd::wctrans_t:
		comment += "Wide character transformation ";
		break;
		case kwd::wctype_t:
		comment += "Wide character type ";
		break;
		case kwd::array:
		comment += "Array class ";
		break;
		case kwd::end:
		comment += "Iterator to end ";
		break;
		case kwd::bitset:
		comment += "Bitset ";
		break;

		case kwd::deque:
		comment += "Double ended queue ";
		break;
		case kwd::forward_list:
		comment += "Forward list ";
		break;
		case kwd::list:
		comment += "List ";
		break;
		case kwd::map:
		comment += "Map ";
		break;
		case kwd::multimap:
		comment += "Multiple-key map ";
		break;
		case kwd::queue:
		comment += "FIFO queue ";
		break;
		case kwd::priority_queue:
		comment += "Priority queue ";
		break;

		case kwd::set:
		comment += "Set ";
		break;
		case kwd::multiset:
		comment += "Multiple-key set ";
		break;
		case kwd::stack:
		comment += "LIFO stack ";
		break;
		case kwd::unordered_map:
		comment += "Unordered Map ";
		break;
		case kwd::unordered_multimap:
		comment += "Unordered Multimap ";
		break;
		case kwd::unordered_set:
		comment += "Unordered Set ";
		break;
		case kwd::unordered_multiset:
		comment += "Unordered Multiset ";
		break;
		case kwd::vector:
		comment += "Vector ";
		break;
		case kwd::atomic:
		comment += "Atomic ";
		break;
		case kwd::atomic_flag:
		comment += "Atomic flag ";
		break;
		case kwd::memory_order:
		comment += "Memory order ";
		break;
		case kwd::kill_dependency:
		comment += "Kill dependency ";
		break;
		case kwd::atomic_thread_fence:
		comment += "Thread fence ";
		break;
		case kwd::atomic_signal_fence:
		comment += "Signal fence ";
		break;
		case kwd::atomic_is_lock_free:
		comment += "Is lock-free ";
		break;
		case kwd::atomic_init:
		comment += "Initialize atomic object ";
		break;
		case kwd::atomic_store:
		comment += "Modify contained value ";
		break;
		case kwd::atomic_store_explicit:
		comment += "Modify contained value (explicit memory order) ";
		break;
		case kwd::atomic_load:
		comment += "Read contained value ";
		break;
		case kwd::atomic_load_explicit:
		comment += "Read contained value (explicit memory order) ";
		break;
		case kwd::atomic_exchange:
		comment += "Read and modify contained value ";
		break;
		case kwd::atomic_exchange_explicit:
		comment += "Read  and modify contained value (explicit memory order) ";
		break;
		case kwd::atomic_compare_exchange_weak:
		comment += "Compare and exchange contained value (weak) ";
		break;
		case kwd::atomic_compare_exchange_weak_explicit:
		comment += "Compare and exchange contained value (weak, explicit) ";
		break;
		case kwd::atomic_compare_exchange_strong:
		comment += "Compare and exchange contained value (strong) ";
		break;
		case kwd::atomic_compare_exchange_strong_explicit:
		comment += "Compare and exchange contained value (strong, explicit) ";
		break;
		case kwd::atomic_fetch_add:
		comment += "Add to contained value ";
		break;
		case kwd::atomic_fetch_add_explicit:
		comment += "Add to contained value (explicit memory order) ";
		break;
		case kwd::atomic_fetch_sub:
		comment += "Subtract from contained value ";
		break;
		case kwd::atomic_fetch_sub_explicit:
		comment += "Subtract from contained value (explicit memory order) ";
		break;
		case kwd::atomic_fetch_and:
		comment += "Apply bitwise AND to contained value ";
		break;
		case kwd::atomic_fetch_and_explicit:
		comment += "Apply bitwise AND to contained value (explicit memory order) ";
		break;
		case kwd::atomic_fetch_or:
		comment += "Apply bitwise OR to contained value ";
		break;
		case kwd::atomic_fetch_or_explicit:
		comment += "Apply bitwise OR to contained value (explicit memory order) ";
		break;
		case kwd::atomic_fetch_xor:
		comment += "Apply bitwise XOR to contained value ";
		break;
		case kwd::atomic_fetch_xor_explicit:
		comment += "Apply bitwise XOR to contained value (explicit memory order) ";
		break;
		case kwd::atomic_flag_test_and_set:
		comment += "Test and set atomic flag ";
		break;
		case kwd::atomic_flag_test_and_set_explicit:
		comment += "Test and set atomic flag (explicit memory order) ";
		break;
		case kwd::atomic_flag_clear:
		comment += "Clear atomic flag ";
		break;
		case kwd::atomic_flag_clear_explicit:
		comment += "Clear atomic flag (explicit memory order) ";
		break;
		case kwd::ATOMIC_VAR_INIT:
		comment += "Initialization of atomic variable ";
		break;
		case kwd::ATOMIC_FLAG_INIT:
		comment += "Initialization of atomic flag ";
		break;

		case kwd::condition_variable:
		comment += "Condition variable ";
		break;
		case kwd::condition_variable_any:
		comment += "Condition variable (any lock) ";
		break;
		case kwd::cv_status:
		comment += "Condition variable status ";
		break;
		case kwd::notify_all_at_thread_exit:
		comment += "Notify all at thread exit ";
		break;

		case kwd::promise:
		comment += "Promise ";
		break;
		case kwd::packaged_task:
		comment += "Packaged task ";
		break;
		case kwd::future:
		comment += "Future ";
		break;
		case kwd::shared_future:
		comment += "Shared future ";
		break;
		case kwd::future_error:
		comment += "Future error exception ";
		break;
		case kwd::future_errc:
		comment += "Error conditions for future objects ";
		break;
		case kwd::future_status:
		comment += "Return value for timed future operations ";
		break;
		case kwd::launch:
		comment += "Launching policy for async ";
		break;
		case kwd::async:
		comment += "Call function asynchronously ";
		break;
		case kwd::future_category:
		comment += "Return future category ";
		break;
		case kwd::mutex:
		comment += "Mutex class ";
		break;
		case kwd::recursive_mutex:
		comment += "Recursive mutex class ";
		break;
		case kwd::timed_mutex:
		comment += "Timed mutex class ";
		break;
		case kwd::recursive_timed_mutex:
		comment += "Recursive timed mutex ";
		break;
		case kwd::lock_guard:
		comment += "Lock guard ";
		break;
		case kwd::unique_lock:
		comment += "Unique lock ";
		break;
		case kwd::once_flag:
		comment += "Flag argument type for call_once ";
		break;
		case kwd::adopt_lock_t:
		comment += "Type of adopt_lock ";
		break;
		case kwd::defer_lock_t:
		comment += "Type of defer_lock ";
		break;
		case kwd::try_to_lock_t:
		comment += "Type of try_to_lock ";
		break;
		case kwd::try_lock:
		comment += "Try to lock multiple mutexes ";
		break;
		case kwd::lock:
		comment += "Lock multiple mutexes ";
		break;
		case kwd::call_once:
		comment += "Call function once "
		break;

		case kwd::thread:
		comment += "Thread ";
		break;
		case kwd::this_thread:
		comment += "This thread ";
		break;

		case kwd::all_of:
		comment += "Test condition on all elements in range ";
		break;
		case kwd::any_of:
		comment += "Test if any element in range fulfills condition ";
		break;
		case kwd::none_of:
		comment += "Test if no elements fulfill condition ";
		break;
		case kwd::for_each:
		comment += "Apply function to range ";
		break;
		case kwd::find:
		comment += "Find value in range ";
		break;
		case kwd::find_if:
		comment += "Find element in range ";
		break;
		case kwd::find_if_not:
		comment += "Find element in range (negative condition) ";
		break;
		case kwd::find_end:
		comment += "Find last subsequence in range ";
		break;
		case kwd::find_first_of:
		comment += "Find element from set in range ";
		break;
		case kwd::adjacent_find:
		comment += "Find equal adjacent elements in range ";
		break;
		case kwd::count:
		comment += "Count appearances of value in range ";
		break;
		case kwd::count_if:
		comment += "Return number of elements in range satisfying condition ";
		break;
		case kwd::mismatch:
		comment += "Return first position where two ranges differ ";
		break;
		case kwd::equal:
		comment += "Test whether the elements in two ranges are equal ";
		break;
		case kwd::is_permutation:
		comment += "Test whether range is permutation of another ";
		break;
		case kwd::search:
		comment += "Search range for subsequence ";
		break;
		case kwd::search_n:
		comment += "Search range for elements ";
		break;
		case kwd::copy:
		comment += "Copy range of elements ";
		break;
		case kwd::copy_n:
		comment += "Copy elements ";
		break;
		case kwd::copy_if:
		comment += "Copy certain elements of range ";
		break;
		case kwd::copy_backward:
		comment += "Copy range of elements backward ";
		break;
		case kwd::move:
		comment += "Move range of elements ";
		break;
		case kwd::move_backward:
		comment += "Move range of elements backward ";
		break;
		case kwd::swap:
		comment += "Exchange values of two objects ";
		break;
		case kwd::swap_ranges:
		comment += "Exchange values of two ranges ";
		break;
		case kwd::iter_swap:
		comment += "Exchange values of objects pointed to by two iterators ";
		break;
		case kwd::transform:
		comment += "Transform range ";
		break;
		case kwd::replace:
		comment += "Replace value in range ";
		break;
		case kwd::replace_if:
		comment += "Replace values in range ";
		break;
		case kwd::replace_copy:
		comment += "Copy range replacing value ";
		break;
		case kwd::replace_copy_if:
		comment += "Copy range replacing value ";
		break;
		case kwd::fill:
		comment += "Fill range with value ";
		break;
		case kwd::fill_n:
		comment += "Fill sequence with value ";
		break;
		case kwd::generate:
		comment += "Generate values for range with function ";
		break;
		case kwd::generate_n:
		comment += "Generate values for sequence with function ";
		break;
		case kwd::remove_if:
		comment += "Remove elements from range ";
		break;
		case kwd::remove_copy:
		comment += "Copy range removing value ";
		break;
		case kwd::remove_copy_if:
		comment += "Copy range removing values ";
		break;
		case kwd::unique:
		comment += "Remove consecutive duplicates in range ";
		break;
		case kwd::unique_copy:
		comment += "Copy range removing duplicates ";
		break;
		case kwd::reverse:
		comment += "Reverse range ";
		break;
		case kwd::reverse_copy:
		comment += "Copy range reversed ";
		break;
		case kwd::rotate:
		comment += "Rotate left the elements in range ";
		break;
		case kwd::rotate_copy:
		comment += "Copy range rotated left ";
		break;
		case kwd::random_shuffle:
		comment += "Randomly rearrange elements in range ";
		break;
		case kwd::shuffle:
		comment += "Randomly rearrange elements in range using generator ";
		break;
		case kwd::is_partitioned:
		comment += "Test whether range is partitioned ";
		break;
		case kwd::partition:
		comment += "Partition range in two ";
		break;
		case kwd::stable_partition:
		comment += "Partition range in two - stable ordering ";
		break;
		case kwd::partition_copy:
		comment += "Partition range into two ";
		break;
		case kwd::partition_point:
		comment += "Get partition point ";
		break;
		case kwd::sort:
		comment += "Sort elements in range ";
		break;
		case kwd::stable_sort:
		comment += "Sort elements preserving order of equivalents ";
		break;
		case kwd::partial_sort:
		comment += "Partially sort elements in range ";
		break;
		case kwd::partial_sort_copy:
		comment += "Copy and partially sort range ";
		break;
		case kwd::is_sorted:
		comment += "Check whether range is sorted ";
		break;
		case kwd::is_sorted_until:
		comment += "Find first unsorted element in range ";
		break;
		case kwd::nth_element:
		comment += "Sort element in range ";
		break;
		case kwd::lower_bound:
		comment += "Return iterator to lower bound ";
		break;
		case kwd::upper_bound:
		comment += "Return iterator to upper bound ";
		break;
		case kwd::equal_range:
		comment += "Get subrange of equal elements ";
		break;
		case kwd::binary_search:
		comment += "Test if value exists in sorted sequence ";
		break;
		case kwd::merge:
		comment += "Merge sorted ranges ";
		break;
		case kwd::inplace_merge:
		comment += "Merge consecutive sorted ranges ";
		break;
		case kwd::includes:
		comment += "Test whether sorted range includes another sorted range ";
		break;
		case kwd::set_union:
		comment += "Union of two sorted ranges ";
		break;
		case kwd::set_intersection:
		comment += "Intersection of two sorted ranges ";
		break;
		case kwd::set_difference:
		comment += "Difference of two sorted ranges ";
		break;
		case kwd::set_symmetric_difference:
		comment += "Symmetric difference of two sorted ranges ";
		break;
		case kwd::push_heap:
		comment += "Push element into heap range ";
		break;
		case kwd::pop_heap:
		comment += "Pop element from heap range ";
		break;
		case kwd::make_heap:
		comment += "Make heap from range ";
		break;
		case kwd::sort_heap:
		comment += "Sort elements of heap ";
		break;
		case kwd::is_heap:
		comment += "Test if range is heap ";
		break;
		case kwd::is_heap_until:
		comment += "Find first element not in heap order ";
		break;
		case kwd::min:
		comment += "Return the smallest ";
		break;
		case kwd::max:
		comment += "Return the largest ";
		break;
		case kwd::minmax:
		comment += "Return smallest and largest elements ";
		break;
		case kwd::min_element:
		comment += "Return smallest element in range ";
		break;
		case kwd::max_element:
		comment += "Return largest element in range ";
		break;
		case kwd::minmax_element:
		comment += "Return smallest and largest elements in range ";
		break;
		case kwd::lexicographical_compare:
		comment += "Lexicographical less-than comparison ";
		break;
		case kwd::next_permutation:
		comment += "Transform range to next permutation ";
		break;
		case kwd::prev_permutation:
		comment += "Transform range to previous permutation ";
		break;

		case kwd::duration:
		comment += "Duration ";
		break;
		case kwd::time_point:
		comment += "Time point ";
		break;
		case kwd::system_clock:
		comment += "System clock ";
		break;
		case kwd::steady_clock:
		comment += "Steady clock ";
		break;
		case kwd::high_resolution_clock:
		comment += "High resolution clock ";
		break;
		case kwd::treat_as_floating_point:
		comment += "Treat as floating point ";
		break;
		case kwd::duration_values:
		comment += "Duration values ";
		break;
		case kwd::common_type (duration)***:
		comment += "Specialization of common_type for duration "
		break;
		case kwd::duration_cast:
		comment += "Duration cast ";
		break;
		case kwd::time_point_cast:
		comment += "Time_point cast ";
		break;
		case kwd::hours:
		comment += "Duration in hours ";
		break;
		case kwd::minutes:
		comment += "Duration in minutes ";
		break;
		case kwd::seconds:
		comment += "Duration in seconds ";
		break;
		case kwd::milliseconds:
		comment += "Duration in milliseconds ";
		break;
		case kwd::microseconds:
		comment += "Duration in microseconds ";
		break;
		case kwd::nanoseconds:
		comment += "Duration in nanoseconds ";
		break;

		case kwd::codecvt_mode:
		comment += "Codecvt mode ";
		break;
		case kwd::codecvt_utf8:
		comment += "Convert UTF-8 ";
		break;
		case kwd::codecvt_utf16:
		comment += "Convert UTF-16 ";
		break;
		case kwd::codecvt_utf8_utf16:
		comment += "Convert between UTF-8 and UTF-16 ";
		break;

		case kwd::complex:
		comment += "Complex number class ";
		break;
		case kwd::real:
		comment += "Real part of complex ";
		break;
		case kwd::imag:
		comment += "Imaginary part of complex ";
		break;
		case kwd::arg:
		comment += "Phase angle of complex ";
		break;
		case kwd::norm:
		comment += "Norm of complex ";
		break;
		case kwd::conj:
		comment += "Complex conjugate ";
		break;
		case kwd::polar:
		comment += "Complex from polar components ";
		break;
		case kwd::proj:
		comment += "Complex projection. ";
		break;
		case kwd::complex_operators:
		comment += "Complex number operators "
		break;
		case kwd::exception:
		comment += "Standard exception class ";
		break;
		case kwd::bad_exception:
		comment += "Exception thrown by unexpected handler ";
		break;
		case kwd::nested_exception:
		comment += "Nested exception class ";
		break;
		case kwd::exception_ptr:
		comment += "Exception pointer ";
		break;
		case kwd::terminate_handler:
		comment += "Type of terminate handler function ";
		break;
		case kwd::unexpected_handler:
		comment += "Type of unexpected handler function ";
		break;
		case kwd::terminate:
		comment += "Function handling termination on exception ";
		break;
		case kwd::get_terminate:
		comment += "Get terminate handler function ";
		break;
		case kwd::set_terminate:
		comment += "Set terminate handler function ";
		break;
		case kwd::unexpected:
		comment += "Function handling unexpected exceptions ";
		break;
		case kwd::get_unexpected:
		comment += "Get unexpected handler function ";
		break;
		case kwd::set_unexpected:
		comment += "Set unexpected handler function ";
		break;
		case kwd::uncaught_exception:
		comment += "Return exception status ";
		break;
		case kwd::current_exception:
		comment += "Get smart pointer to current exception ";
		break;
		case kwd::rethrow_exception:
		comment += "Rethrow exception ";
		break;
		case kwd::make_exception_ptr:
		comment += "Make exception_ptr ";
		break;
		case kwd::throw_with_nested:
		comment += "Throw with nested ";
		break;
		case kwd::rethrow_if_nested:
		comment += "Rethrow if nested ";
		break;

		case kwd::unary_function:
		comment += "Unary function object base class ";
		break;
		case kwd::binary_function:
		comment += "Binary function object base class ";
		break;
		/*paste commentblock 1*/
		case kwd::initializer_list:
		comment += "Initializer list ";
		break;

		case kwd::advance:
		comment += "Advance iterator ";
		break;
		case kwd::distance:
		comment += "Return distance between iterators ";
		break;
		case kwd::prev:
		comment += "Get iterator to previous element ";
		break;
		case kwd::next:
		comment += "Get iterator to next element ";
		break;
		case kwd::back_inserter:
		comment += "Construct back insert iterator ";
		break;
		case kwd::front_inserter:
		comment += "Constructs front insert iterator ";
		break;
		case kwd::inserter:
		comment += "Construct insert iterator ";
		break;
		case kwd::make_move_iterator:
		comment += "Construct move iterator ";
		break;
		case kwd::iterator:
		comment += "Iterator base class ";
		break;
		case kwd::iterator_traits:
		comment += "Iterator traits ";
		break;
		case kwd::reverse_iterator:
		comment += "Reverse iterator ";
		break;
		case kwd::move_iterator:
		comment += "Move iterator ";
		break;
		case kwd::back_insert_iterator:
		comment += "Back insert iterator ";
		break;
		case kwd::front_insert_iterator:
		comment += "Front insert iterator ";
		break;
		case kwd::insert_iterator:
		comment += "Insert iterator ";
		break;
		case kwd::istream_iterator:
		comment += "Istream iterator ";
		break;
		case kwd::ostream_iterator:
		comment += "Ostream iterator ";
		break;
		case kwd::istreambuf_iterator:
		comment += "Input stream buffer iterator ";
		break;
		case kwd::ostreambuf_iterator:
		comment += "Output stream buffer iterator ";
		break;
		case kwd::input_iterator_tag:
		comment += "Input iterator category ";
		break;
		case kwd::output_iterator_tag:
		comment += "Output iterator category ";
		break;
		case kwd::forward_iterator_tag:
		comment += "Forward iterator category ";
		break;
		case kwd::bidirectional_iterator_tag:
		comment += "Bidirectional iterator category ";
		break;
		case kwd::random_access_iterator_tag:
		comment += "Random-access iterator category ";
		break;

		case kwd::numeric_limits:
		comment += "Numeric limits type ";
		break;
		case kwd::float_round_style:
		comment += "Enum type for float rounding style ";
		break;
		case kwd::float_denorm_style:
		comment += "Enum type for float denormalization style ";
		break;

		case kwd::use_facet:
		comment += "Access facet of locale ";
		break;
		case kwd::has_facet:
		comment += "Check if locale has facet ";
		break;
		case kwd::isalnum:
		comment += "Check if character is alphanumeric ";
		break;
		case kwd::locale:
		comment += "Locale class ";
		break;
		case kwd::ctype:
		comment += "Character type facet ";
		break;
		case kwd::ctype_byname:
		comment += "Character type facet ";
		break;
		case kwd::codecvt:
		comment += "Convert codeset facet ";
		break;
		case kwd::codecvt_byname:
		comment += "Convert codeset facet ";
		break;
		case kwd::num_get:
		comment += "Facet to parse numeric values ";
		break;
		case kwd::num_put:
		comment += "Facet to format numeric values ";
		break;
		case kwd::numpunct:
		comment += "Numeric punctuation facet ";
		break;
		case kwd::numpunct_byname:
		comment += "Numeric puntuation facet ";
		break;
		case kwd::collate:
		comment += "Facet to compare and hash strings ";
		break;
		case kwd::collate_byname:
		comment += "Facet to compare and hash strings ";
		break;
		case kwd::time_get:
		comment += "Facet to parse dates and times ";
		break;
		case kwd::time_get_byname:
		comment += "Facet to parse dates and times ";
		break;
		case kwd::time_put:
		comment += "Facet to format dates and times ";
		break;
		case kwd::time_put_byname:
		comment += "Facet to format dates and times ";
		break;
		case kwd::money_get:
		comment += "Facet to parse monetary expressions ";
		break;
		case kwd::money_put:
		comment += "Facet to format monetary expressions ";
		break;
		case kwd::moneypunct:
		comment += "Monetary punctuation facet ";
		break;
		case kwd::moneypunct_byname:
		comment += "Monetary punctuation facet ";
		break;
		case kwd::messages:
		comment += "Facet to access message catalogs ";
		break;
		case kwd::messages_byname:
		comment += "Facet to access message catalogs  ";
		break;
		case kwd::ctype_base:
		comment += "Base class for ctype ";
		break;
		case kwd::codecvt_base:
		comment += "Base class for codecvt ";
		break;
		case kwd::time_base:
		comment += "Base class for time_get ";
		break;
		case kwd::money_base:
		comment += "Base class for moneypunct ";
		break;

		case kwd::allocator:
		comment += "Default allocator ";
		break;
		case kwd::allocator_arg:
		comment += "Allocator arg ";
		break;
		case kwd::allocator_arg_t:
		comment += "Allocator arg type ";
		break;
		case kwd::allocator_traits:
		comment += "Allocator traits ";
		break;
		case kwd::auto_ptr:
		comment += "Automatic Pointer [deprecated] ";
		break;
		case kwd::auto_ptr_ref:
		comment += "Reference to automatic pointer ";
		break;
		case kwd::shared_ptr:
		comment += "Shared pointer ";
		break;
		case kwd::weak_ptr:
		comment += "Weak shared pointer ";
		break;
		case kwd::unique_ptr:
		comment += "Unique pointer ";
		break;
		case kwd::default_delete:
		comment += "Default deleter ";
		break;
		case kwd::make_shared:
		comment += "Make shared_ptr ";
		break;
		case kwd::allocate_shared:
		comment += "Allocate shared_ptr ";
		break;
		case kwd::static_pointer_cast:
		comment += "Static cast of shared_ptr ";
		break;
		case kwd::dynamic_pointer_cast:
		comment += "Dynamic cast of shared_ptr ";
		break;
		case kwd::const_pointer_cast:
		comment += "Const cast of shared_ptr ";
		break;
		case kwd::get_deleter:
		comment += "Get deleter from shared_ptr ";
		break;
		case kwd::owner_less:
		comment += "Owner-based less-than operation ";
		break;
		case kwd::enable_shared_from_this:
		comment += "Enable shared_from_this ";
		break;
		case kwd::raw_storage_iterator:
		comment += "Raw storage iterator ";
		break;
		case kwd::get_temporary_buffer:
		comment += "Get block of temporary memory ";
		break;
		case kwd::return_temporary_buffer:
		comment += "Return block of temporary memory ";
		break;
		case kwd::uninitialized_copy:
		comment += "Copy block of memory ";
		break;
		case kwd::uninitialized_copy_n:
		comment += "Copy block of memory ";
		break;
		case kwd::uninitialized_fill:
		comment += "Fill block of memory ";
		break;
		case kwd::uninitialized_fill_n:
		comment += "Fill block of memory ";
		break;
		case kwd::pointer_traits:
		comment += "Pointer traits ";
		break;
		case kwd::pointer_safety:
		comment += "Pointer safety enum ";
		break;
		case kwd::declare_reachable:
		comment += "Declare pointer as reachable ";
		break;
		case kwd::undeclare_reachable:
		comment += "Undeclare pointer as reachable ";
		break;
		case kwd::declare_no_pointers:
		comment += "Declare memory block as containing no pointers ";
		break;
		case kwd::undeclare_no_pointers:
		comment += "Undeclare memory block as containing no pointers ";
		break;
		case kwd::get_pointer_safety:
		comment += "Get pointer safety ";
		break;
		case kwd::align:
		comment += "Align in range ";
		break;
		case kwd::addressof:
		comment += "Address of object or function ";
		break;

		case kwd::operator new:
		comment += "Allocate storage space ";
		break;
		case kwd::operator new[]:
		comment += "Allocate storage space for array ";
		break;
		case kwd::operator delete:
		comment += "Deallocate storage space ";
		break;
		case kwd::operator delete[]:
		comment += "Deallocate storage space of array ";
		break;
		case kwd::set_new_handler:
		comment += "Set new handler function ";
		break;
		case kwd::get_new_handler:
		comment += "Get new handler function ";
		break;
		case kwd::nothrow_t:
		comment += "Nothrow type ";
		break;
		case kwd::new_handler:
		comment += "Type of new handler function ";
		break;
		case kwd::bad_alloc:
		comment += "Exception thrown on failure allocating memory ";
		break;
		case kwd::bad_array_new_length:
		comment += "Exception on bad array length ";
		break;
		case kwd::nothrow:
		comment += "Nothrow constant ";
		break;

		case kwd::accumulate:
		comment += "Accumulate values in range ";
		break;
		case kwd::adjacent_difference:
		comment += "Compute adjacent difference of range ";
		break;
		case kwd::inner_product:
		comment += "Compute cumulative inner product of range ";
		break;
		case kwd::partial_sum:
		comment += "Compute partial sums of range ";
		break;
		case kwd::iota:
		comment += "Store increasing sequence ";
		break;

		case kwd::linear_congruential_engine:
		comment += "Linear congruential random number engine ";
		break;
		case kwd::mersenne_twister_engine:
		comment += "Mersenne twister random number engine ";
		break;
		case kwd::subtract_with_carry_engine:
		comment += "Subtract-with-carry random number engine ";
		break;
		case kwd::discard_block_engine:
		comment += "Discard-block random number engine adaptor ";
		break;
		case kwd::independent_bits_engine:
		comment += "Independent-bits random number engine adaptor ";
		break;
		case kwd::shuffle_order_engine:
		comment += "Shuffle-order random number engine adaptor ";
		break;
		case kwd::default_random_engine:
		comment += "Default random engine ";
		break;
		case kwd::minstd_rand:
		comment += "Minimal Standard minstd_rand generator ";
		break;
		case kwd::minstd_rand0:
		comment += "Minimal Standard minstd_rand0 generator ";
		break;
		case kwd::mt19937:
		comment += "Mersenne Twister 19937 generator ";
		break;
		case kwd::mt19937_64:
		comment += "Mersenne Twister 19937 generator (64 bit) ";
		break;
		case kwd::ranlux24_base:
		comment += "Ranlux 24 base generator ";
		break;
		case kwd::ranlux48_base:
		comment += "Ranlux 48 base generator ";
		break;
		case kwd::ranlux24:
		comment += "Ranlux 24 generator ";
		break;
		case kwd::ranlux48:
		comment += "Ranlux 48 generator ";
		break;
		case kwd::knuth_b:
		comment += "Knuth-B generator ";
		break;
		case kwd::random_device:
		comment += "True random number generator ";
		break;
		case kwd::uniform_int_distribution:
		comment += "Uniform discrete distribution ";
		break;
		case kwd::uniform_real_distribution:
		comment += "Uniform real distribution ";
		break;
		case kwd::bernoulli_distribution:
		comment += "Bernoulli distribution ";
		break;
		case kwd::binomial_distribution:
		comment += "Binomial distribution ";
		break;
		case kwd::geometric_distribution:
		comment += "Geometric distribution ";
		break;
		case kwd::negative_binomial_distribution:
		comment += "Negative binomial distribution ";
		break;
		case kwd::poisson_distribution:
		comment += "Poisson distribution ";
		break;
		case kwd::exponential_distribution:
		comment += "Exponential distribution ";
		break;
		case kwd::gamma_distribution:
		comment += "Gamma distribution ";
		break;
		case kwd::weibull_distribution:
		comment += "Weibull distribution ";
		break;
		case kwd::extreme_value_distribution:
		comment += "Extreme Value distribution ";
		break;
		case kwd::normal_distribution:
		comment += "Normal distribution ";
		break;
		case kwd::lognormal_distribution:
		comment += "Lognormal distribution ";
		break;
		case kwd::chi_squared_distribution:
		comment += "Chi-squared distribution ";
		break;
		case kwd::cauchy_distribution:
		comment += "Cauchy distribution ";
		break;
		case kwd::fisher_f_distribution:
		comment += "Fisher F-distribution ";
		break;
		case kwd::student_t_distribution:
		comment += "Student T-Distribution ";
		break;
		case kwd::discrete_distribution:
		comment += "Discrete distribution ";
		break;
		case kwd::piecewise_constant_distribution:
		comment += "Piecewise constant distribution ";
		break;
		case kwd::piecewise_linear_distribution:
		comment += "Piecewise linear distribution ";
		break;
		case kwd::seed_seq:
		comment += "Seed sequence ";
		break;
		case kwd::generate_canonical:
		comment += "Generate canonical numbers ";
		break;

		case kwd::ratio:
		comment += "Ratio ";
		break;
		case kwd::ratio_add:
		comment += "Add two ratios ";
		break;
		case kwd::ratio_subtract:
		comment += "Subtract ratios ";
		break;
		case kwd::ratio_multiply:
		comment += "Multiply two ratios ";
		break;
		case kwd::ratio_divide:
		comment += "Divide ratios ";
		break;
		case kwd::ratio_equal:
		comment += "Compare ratios ";
		break;
		case kwd::ratio_not_equal:
		comment += "Compare ratios for inequality ";
		break;
		case kwd::ratio_less:
		comment += "Compare ratios for less-than inequality ";
		break;
		case kwd::ratio_less_equal:
		comment += "Compare ratios for equality or less-than inequality ";
		break;
		case kwd::ratio_greater:
		comment += "Compare ratios for greater than inequality ";
		break;
		case kwd::ratio_greater_equal:
		comment += "Compare ratios for equality or greater-than inequality ";
		break;

		case kwd::regex_match:
		comment += "Match sequence ";
		break;
		case kwd::regex_search:
		comment += "Search sequence ";
		break;
		case kwd::regex_replace:
		comment += "Replace matched sequence ";
		break;
		case kwd::regex_iterator:
		comment += "Regex iterator ";
		break;
		case kwd::regex_token_iterator:
		comment += "Regex token iterator ";
		break;
		case kwd::basic_regex:
		comment += "Regular expression ";
		break;
		case kwd::match_results:
		comment += "Match results ";
		break;
		case kwd::sub_match:
		comment += "Sub-expression match ";
		break;
		case kwd::regex_traits:
		comment += "Regex traits ";
		break;
		case kwd::regex_error:
		comment += "Regex exception ";
		break;
		case kwd::regex:
		comment += "Regex ";
		break;
		case kwd::wregex:
		comment += "Regex for wchar_t ";
		break;
		case kwd::cmatch:
		comment += "match_results for string literals ";
		break;
		case kwd::wcmatch:
		comment += "match_results for wide string literals ";
		break;
		case kwd::smatch:
		comment += "match_results for string objects ";
		break;
		case kwd::wsmatch:
		comment += "match_results for wide string objects ";
		break;
		case kwd::csub_match:
		comment += "sub_match for string literals ";
		break;
		case kwd::wcsub_match:
		comment += "sub_match for wide string literals ";
		break;
		case kwd::ssub_match:
		comment += "sub_match for strings ";
		break;
		case kwd::wssub_match:
		comment += "sub_match for wide strings ";
		break;
		case kwd::regex_constants:
		comment += "regex constants ";
		break;
		case kwd::ECMAScript syntax:
		comment += "ECMAScript regular expressions pattern syntax ";
		break;
		
		case kwd::begin:
		comment += "Iterator to beginning ";
		break;
		case kwd::logic_error:
		comment += "Logic error exception ";
		break;
		case kwd::domain_error:
		comment += "Domain error exception ";
		break;
		case kwd::invalid_argument:
		comment += "Invalid argument exception ";
		break;
		case kwd::length_error:
		comment += "Length error exception ";
		break;
		case kwd::out_of_range:
		comment += "Out-of-range exception ";
		break;
		case kwd::runtime_error:
		comment += "Runtime error exception ";
		break;
		case kwd::range_error:
		comment += "Range error exception ";
		break;
		case kwd::overflow_error:
		comment += "Overflow error exception ";
		break;
		case kwd::underflow_error:
		comment += "Underflow error exception ";
		break;
		case kwd::basic_string:
		comment += "Generic string class ";
		break;
		case kwd::char_traits:
		comment += "Character traits ";
		break;
		case kwd::string:
		comment += "String class ";
		break;
		case kwd::u16string:
		comment += "String of 16-bit characters ";
		break;
		case kwd::u32string:
		comment += "String of 32-bit characters ";
		break;
		case kwd::wstring:
		comment += "Wide string ";
		break;
		case kwd::stoi:
		comment += "Convert string to integer ";
		break;
		case kwd::stol:
		comment += "Convert string to long int ";
		break;
		case kwd::stoul:
		comment += "Convert string to unsigned integer ";
		break;
		case kwd::stoll:
		comment += "Convert string to long long ";
		break;
		case kwd::stoull:
		comment += "Convert string to unsigned long long ";
		break;
		case kwd::stof:
		comment += "Convert string to float ";
		break;
		case kwd::stod:
		comment += "Convert string to double ";
		break;
		case kwd::stold:
		comment += "Convert string to long double ";
		break;
		case kwd::to_string:
		comment += "Convert numerical value to string ";
		break;
		case kwd::to_wstring:
		comment += "Convert numerical value to wide string ";
		break;
		case kwd::error_category:
		comment += "Error category ";
		break;
		case kwd::error_code:
		comment += "Error code ";
		break;
		case kwd::error_condition:
		comment += "Error condition ";
		break;
		case kwd::system_error:
		comment += "System error exception ";
		break;
		case kwd::is_error_code_enum:
		comment += "error_code enum flag ";
		break;
		case kwd::is_error_condition_enum:
		comment += "error_condition enum flag ";
		break;
		case kwd::errc:
		comment += "Generic error conditions ";
		break;
		case kwd::generic_category:
		comment += "Return generic category ";
		break;
		case kwd::system_category:
		comment += "Return system category ";
		break;
		case kwd::make_error_code:
		comment += "Make error code ";
		break;
		case kwd::make_error_condition:
		comment += "Make error condition ";
		break;

		case kwd::tuple:
		comment += "Tuple ";
		break;
		case kwd::tuple_size:
		comment += "Tuple size traits ";
		break;
		case kwd::tuple_element:
		comment += "Tuple element type ";
		break;
		case kwd::make_tuple:
		comment += "Construct tuple ";
		break;
		case kwd::forward_as_tuple:
		comment += "Forward as tuple ";
		break;
		case kwd::tie:
		comment += "Tie arguments to tuple elements ";
		break;
		case kwd::tuple_cat:
		comment += "Concatenate tuples ";
		break;
		case kwd::get:
		comment += "Get element ";
		break;
		case kwd::ignore:
		comment += "Ignore assignment ";
		break;

		case kwd::type_index:
		comment += "Type index ";
		break;
		case kwd::hash:
		comment += "Hash for type_index ";
		break;

		case kwd::type_info:
		comment += "Type information type ";
		break;
		case kwd::bad_cast:
		comment += "Exception thrown on failure to dynamic cast ";
		break;
		case kwd::bad_typeid:
		comment += "Exception thrown on typeid of null pointer ";
		break;

		case kwd::integral_constant:
		comment += "Integral constant ";
		break;
		case kwd::true_type:
		comment += "True type ";
		break;
		case kwd::false_type:
		comment += "False type ";
		break;
		case kwd::is_array:
		comment += "Is array ";
		break;
		case kwd::is_class:
		comment += "Is non-union class ";
		break;
		case kwd::is_enum:
		comment += "Is enum ";
		break;
		case kwd::is_floating_point:
		comment += "Is floating point ";
		break;
		case kwd::is_function:
		comment += "Is function ";
		break;
		case kwd::is_integral:
		comment += "Is integral ";
		break;
		case kwd::is_lvalue_reference:
		comment += "Is lvalue reference ";
		break;
		case kwd::is_member_function_pointer:
		comment += "Is member function pointer ";
		break;
		case kwd::is_member_object_pointer:
		comment += "Is member object pointer ";
		break;
		case kwd::is_pointer:
		comment += "Is pointer ";
		break;
		case kwd::is_rvalue_reference:
		comment += "Is rvalue reference ";
		break;
		case kwd::is_union:
		comment += "Is union ";
		break;
		case kwd::is_void:
		comment += "Is void ";
		break;
		case kwd::is_arithmetic:
		comment += "Is arithmetic type ";
		break;
		case kwd::is_compound:
		comment += "Is compound type ";
		break;
		case kwd::is_fundamental:
		comment += "Is fundamental type ";
		break;
		case kwd::is_member_pointer:
		comment += "Is member pointer type ";
		break;
		case kwd::is_object:
		comment += "Is object type ";
		break;
		case kwd::is_reference:
		comment += "Is reference type ";
		break;
		case kwd::is_scalar:
		comment += "Is scalar type ";
		break;
		case kwd::is_abstract:
		comment += "Is abstract class ";
		break;
		case kwd::is_const:
		comment += "Is const-qualified ";
		break;
		case kwd::is_empty:
		comment += "Is empty class ";
		break;
		case kwd::is_literal_type:
		comment += "Is literal type ";
		break;
		case kwd::is_pod:
		comment += "Is POD type ";
		break;
		case kwd::is_polymorphic:
		comment += "Is polymorphic ";
		break;
		case kwd::is_signed:
		comment += "Is signed type ";
		break;
		case kwd::is_standard_layout:
		comment += "Is standard-layout type ";
		break;
		case kwd::is_trivial:
		comment += "Is trivial type ";
		break;
		case kwd::is_trivially_copyable:
		comment += "Is trivially copyable ";
		break;
		case kwd::is_unsigned:
		comment += "Is unsigned type ";
		break;
		case kwd::is_volatile:
		comment += "Is volatile-qualified ";
		break;
		case kwd::has_virtual_destructor:
		comment += "Has virtual destructor ";
		break;
		case kwd::is_assignable:
		comment += "Is assignable ";
		break;
		case kwd::is_constructible:
		comment += "Is constructible ";
		break;
		case kwd::is_copy_assignable:
		comment += "Is copy assignable ";
		break;
		case kwd::is_copy_constructible:
		comment += "Is copy constructible ";
		break;
		case kwd::is_destructible:
		comment += "Is destructible ";
		break;
		case kwd::is_default_constructible:
		comment += "Is default constructible ";
		break;
		case kwd::is_move_assignable:
		comment += "Is move assignable ";
		break;
		case kwd::is_move_constructible:
		comment += "Is move constructible ";
		break;
		case kwd::is_trivially_assignable:
		comment += "Is trivially assignable ";
		break;
		case kwd::is_trivially_constructible:
		comment += "Is trivially constructible ";
		break;
		case kwd::is_trivially_copy_assignable:
		comment += "Is trivially copy assignable ";
		break;
		case kwd::is_trivially_copy_constructible:
		comment += "Is trivially copy constructible ";
		break;
		case kwd::is_trivially_destructible:
		comment += "Is trivially destructible ";
		break;
		case kwd::is_trivially_default_constructible:
		comment += "Is trivially default constructible ";
		break;
		case kwd::is_trivially_move_assignable:
		comment += "Is trivially move assignable ";
		break;
		case kwd::is_trivially_move_constructible:
		comment += "Is trivially move constructible ";
		break;
		case kwd::is_nothrow_assignable:
		comment += "Is assignable throwing no exceptions ";
		break;
		case kwd::is_nothrow_constructible:
		comment += "Is constructible  throwing no exceptions ";
		break;
		case kwd::is_nothrow_copy_assignable:
		comment += "Is copy assignable throwing no exceptions ";
		break;
		case kwd::is_nothrow_copy_constructible:
		comment += "Is copy constructible throwing no exceptions ";
		break;
		case kwd::is_nothrow_destructible:
		comment += "Is nothrow destructible ";
		break;
		case kwd::is_nothrow_default_constructible:
		comment += "Is default constructible throwing no exceptions ";
		break;
		case kwd::is_nothrow_move_assignable:
		comment += "Is move assignable throwing no exception ";
		break;
		case kwd::is_nothrow_move_constructible:
		comment += "Is move constructible throwing no exceptions ";
		break;
		case kwd::is_base_of:
		comment += "Is base class of ";
		break;
		case kwd::is_convertible:
		comment += "Is convertible ";
		break;
		case kwd::is_same:
		comment += "Is same type ";
		break;
		case kwd::alignment_of:
		comment += "Alignment of ";
		break;
		case kwd::extent:
		comment += "Array dimension extent ";
		break;
		case kwd::rank:
		comment += "Array rank ";
		break;
		case kwd::add_const:
		comment += "Add const qualification ";
		break;
		case kwd::add_cv:
		comment += "Add const volatile qualification ";
		break;
		case kwd::add_volatile:
		comment += "Add volatile qualification ";
		break;
		case kwd::remove_const:
		comment += "Remove const qualification ";
		break;
		case kwd::remove_cv:
		comment += "Remove cv qualification ";
		break;
		case kwd::remove_volatile:
		comment += "Remove volatile qualification ";
		break;
		case kwd::add_pointer:
		comment += "Add pointer ";
		break;
		case kwd::add_lvalue_reference:
		comment += "Add lvalue reference ";
		break;
		case kwd::add_rvalue_reference:
		comment += "Add rvalue reference ";
		break;
		case kwd::decay:
		comment += "Decay type ";
		break;
		case kwd::make_signed:
		comment += "Make signed ";
		break;
		case kwd::make_unsigned:
		comment += "Make unsigned ";
		break;
		case kwd::remove_all_extents:
		comment += "Remove all array extents ";
		break;
		case kwd::remove_extent:
		comment += "Remove array extent ";
		break;
		case kwd::remove_pointer:
		comment += "Remove pointer ";
		break;
		case kwd::remove_reference:
		comment += "Remove reference ";
		break;
		case kwd::underlying_type:
		comment += "Underlying type of enum ";
		break;
		case kwd::aligned_storage:
		comment += "Aligned storage ";
		break;
		case kwd::aligned_union:
		comment += "Aligned union ";
		break;
		case kwd::common_type:
		comment += "Common type ";
		break;
		case kwd::conditional:
		comment += "Conditional type ";
		break;
		case kwd::enable_if:
		comment += "Enable type if condition is met ";
		break;
		case kwd::result_of:
		comment += "Result of call ";
		break;
		/*comment block 2*/
		case kwd::valarray:
		comment += "Valarray class ";
		break;
		case kwd::slice:
		comment += "Valarray slice selector ";
		break;
		case kwd::gslice:
		comment += "Valarray generalized slice selector ";
		break;
		case kwd::slice_array:
		comment += "Valarray slice selection ";
		break;
		case kwd::gslice_array:
		comment += "Valarray gslice selection ";
		break;
		case kwd::mask_array:
		comment += "Valarray mask selection ";
		break;
		case kwd::indirect_array:
		comment += "Valarray indirect selection ";
		break;
		case kwd::Valarray_operators :
		comment += "";
		break;
	}
}
return comment;
}
