class CppDictionary{
	public:	
		String commentor(String commentarray[])	{
			String comment +=.*";;
			int commentarraylen =sizeof(commentarray)/sizeof(commentarray[0]);
			for(int i =0; i < commentarraylen; i++){
				switch (commentarray[i])
				case "assert":
				comment += "Evaluate assertion ";
				break;

				case "isalnum":
				comment += "Check if character is alphanumeric ";
				break;
				case "isalpha":
				comment += "Check if character is alphabetic ";
				break;
				case "isblank":
				comment += "Check if character is blank ";
				break;
				case "iscntrl":
				comment += "Check if character is a control character ";
				break;
				case "isdigit":
				comment += "Check if character is decimal digit ";
				break;
				case "isgraph":
				comment += "Check if character has graphical representation ";
				break;
				case "islower":
				comment += "Check if character is lowercaseletter ";
				break;
				case "isprint":
				comment += "Check if character is printable ";
				break;
				case "ispunct":
				comment += "Check if character is a punctuation character ";
				break;
				case "isspace":
				comment += "Check if character is a white-space ";
				break;
				case "isupper":
				comment += "Check if character is uppercaseletter ";
				break;
				case "isxdigit":
				comment += "Check if character is hexadecimal digit ";
				break;
				case "tolower":
				comment += "Convert uppercaseletter to lowercase "
				break;
				case "toupper":
				comment += "Convert lowercaseletter to uppercase "
				break;

				case "errno":
				comment += "Last error number ";
				break;

				case "feclearexcept":
				comment += "Clear floating-point exceptions ";
				break;
				case "feraiseexcept":
				comment += "Raise floating-point exception ";
				break;
				case "fegetexceptflag":
				comment += "Get floating-point exception flags ";
				break;
				case "fesetexceptflag":
				comment += "Set floating-point exception flags ";
				break;
				case "fegetround":
				comment += "Get rounding direction mode ";
				break;
				case "fesetround":
				comment += "Set rounding direction mode ";
				break;
				case "fegetenv":
				comment += "Get floating-point environment ";
				break;
				case "fesetenv":
				comment += "Set floating-point environment ";
				break;
				case "feholdexcept":
				comment += "Hold floating-point exceptions ";
				break;
				case "feupdateenv":
				comment += "Update floating-point environment ";
				break;
				case "fetestexcept":
				comment += "Test for floating-point exceptions ";
				break;
				case "fenv_t":
				comment += "Floating-point environment type ";
				break;
				case "fexcept_t":
				comment += "Floating-point exceptions type ";
				break;
				case "FE_DIVBYZERO":
				comment += "Pole error exception ";
				break;
				case "FE_INEXACT":
				comment += "Inexact result exception ";
				break;
				case "FE_INVALID":
				comment += "Invalid argument exception ";
				break;
				case "FE_OVERFLOW":
				comment += "Overflow range error exception ";
				break;
				case "FE_UNDERFLOW":
				comment += "Underflow range error exception ";
				break;
				case "FE_ALL_EXCEPT":
				comment += "All exceptions ";
				break;
				case "FE_DOWNWARD":
				comment += "Downward rounding direction mode ";
				break;
				case "FE_TONEAREST":
				comment += "To-nearest rounding direction mode ";
				break;
				case "FE_TOWARDZERO":
				comment += "Toward-zero rounding direction mode ";
				break;
				case "FE_UPWARD":
				comment += "Upward rounding direction mode ";
				break;
				case "FE_DFL_ENV":
				comment += "Default environment ";
				break;
				case "FENV_ACCESS":
				comment += "Access to Floating-point environment ";
				break;

				case "<climits>;":
				comment += "Sizes of integral types"
				break;
				
				case "<cfloat>;":
				comment += "Characteristics of floating-point types ";
				break;
				case "struct lconv":
				comment += " Formatting info for numeric values"
				break;
				case "setlocale":
				comment += "Set or retrieve locale ";
				break;
				case "localeconv":
				comment += "Get locale formatting parameters for quantities ";
				break;

				case "cos":
				comment += "Compute cosine ";
				break;
				case "sin":
				comment += "Compute sine ";
				break;
				case "tan":
				comment += "Compute tangent ";
				break;
				case "acos":
				comment += "Compute arc cosine ";
				break;
				case "asin":
				comment += "Compute arc sine ";
				break;
				case "atan":
				comment += "Compute arc tangent ";
				break;
				case "atan2":
				comment += "Compute arc tangent with two parameters ";
				break;
				case "cosh":
				comment += "Compute hyperbolic cosine ";
				break;
				case "sinh":
				comment += "Compute hyperbolic sine ";
				break;
				case "tanh":
				comment += "Compute hyperbolic tangent ";
				break;
				case "acosh":
				comment += "Compute area hyperbolic cosine ";
				break;
				case "asinh":
				comment += "Compute area hyperbolic sine ";
				break;
				case "atanh":
				comment += "Compute area hyperbolic tangent ";
				break;
				case "exp":
				comment += "Compute exponential function ";
				break;
				case "frexp":
				comment += "Get significand and exponent ";
				break;
				case "ldexp":
				comment += "Generate value from significand and exponent ";
				break;
				case "log":
				comment += "Compute natural logarithm ";
				break;
				case "log10":
				comment += "Compute common logarithm ";
				break;
				case "modf":
				comment += "Break into fractional and integral parts ";
				break;
				case "exp2":
				comment += "Compute binary exponential function ";
				break;
				case "expm1":
				comment += "Compute exponential minus one ";
				break;
				case "ilogb":
				comment += "Integer binary logarithm ";
				break;
				case "log1p":
				comment += "Compute logarithm plus one ";
				break;
				case "log2":
				comment += "Compute binary logarithm ";
				break;
				case "logb":
				comment += "Compute floating-point base logarithm ";
				break;
				case "scalbn":
				comment += "Scale significand using floating-point base exponent ";
				break;
				case "scalbln":
				comment += "Scale significand using floating-point base exponent (long) ";
				break;
				case "pow":
				comment += "Raise to power ";
				break;
				case "sqrt":
				comment += "Compute square root ";
				break;
				case "cbrt":
				comment += "Compute cubic root ";
				break;
				case "hypot":
				comment += "Compute hypotenuse ";
				break;
				case "erf":
				comment += "Compute error function ";
				break;
				case "erfc":
				comment += "Compute complementary error function ";
				break;
				case "tgamma":
				comment += "Compute gamma function ";
				break;
				case "lgamma":
				comment += "Compute log-gamma function ";
				break;
				case "ceil":
				comment += "Round up value ";
				break;
				case "floor":
				comment += "Round down value ";
				break;
				case "fmod":
				comment += "Compute remainder of division ";
				break;
				case "trunc":
				comment += "Truncate value ";
				break;
				case "round":
				comment += "Round to nearest ";
				break;
				case "lround":
				comment += "Round to nearest and cast to long integer ";
				break;
				case "llround":
				comment += "Round to nearest and cast to long long integer ";
				break;
				case "rint":
				comment += "Round to integral value ";
				break;
				case "lrint":
				comment += "Round and cast to long integer ";
				break;
				case "llrint":
				comment += "Round and cast to long long integer ";
				break;
				case "nearbyint":
				comment += "Round to nearby integral value ";
				break;
				case "remainder":
				comment += "Compute remainder (IEC 60559) ";
				break;
				case "remquo":
				comment += "Compute remainder and quotient ";
				break;
				case "copysign":
				comment += "Copy sign ";
				break;
				case "nan":
				comment += "Generate quiet NaN ";
				break;
				case "nextafter":
				comment += "Next representable value ";
				break;
				case "nexttoward":
				comment += "Next representable value toward precise value ";
				break;
				case "fdim":
				comment += "Positive difference ";
				break;
				case "fmax":
				comment += "Maximum value ";
				break;
				case "fmin":
				comment += "Minimum value ";
				break;
				case "fabs":
				comment += "Compute absolute value ";
				break;
				case "abs":
				comment += "Compute absolute value ";
				break;
				case "fma":
				comment += "Multiply-add ";
				break;
				case "fpclassify":
				comment += "Classify floating-point value ";
				break;
				case "isfinite":
				comment += "Is finite value ";
				break;
				case "isinf":
				comment += "Is infinity ";
				break;
				case "isnan":
				comment += "Is Not-A-Number ";
				break;
				case "isnormal":
				comment += "Is normal ";
				break;
				case "signbit":
				comment += "Sign bit ";
				break;
				case "isgreater":
				comment += "Is greater ";
				break;
				case "isgreaterequal":
				comment += "Is greater or equal ";
				break;
				case "isless":
				comment += "Is less ";
				break;
				case "islessequal":
				comment += "Is less or equal ";
				break;
				case "islessgreater":
				comment += "Is less or greater ";
				break;
				case "isunordered":
				comment += "Is unordered ";
				break;
				case "math_errhandling":
				comment += "Error handling ";
				break;
				case "INFINITY":
				comment += "Infinity ";
				break;
				case "NAN":
				comment += "Not-A-Number ";
				break;
				case "HUGE_VAL":
				comment += "Huge value ";
				break;
				case "HUGE_VALF":
				comment += "Huge float valueHuge long double value ";
				break;
				case "HUGE_VALL":
				comment += "Huge float valueHuge long double value ";
				break;
				case "double_t":
				comment += "Floating-point type ";
				break;
				case "float_t":
				comment += "Floating-point type ";
				break;

				case "longjmp":
				comment += "Long jump ";
				break;
				case "setjmp":
				comment += "Save calling environment for long jump ";
				break;
				case "jmp_buf":
				comment += "Type to hold information to restore calling environment ";
				break;

				case "signal":
				comment += "Set function to handle signal ";
				break;
				case "raise":
				comment += "Generates a signal ";
				break;
				case "sig_atomic_t":
				comment += "Integral type ";
				break;

				case "va_list":
				comment += "Type to hold information about variable arguments ";
				break;
				case "va_start":
				comment += "Initialize a variable argument list ";
				break;
				case "va_arg":
				comment += "Retrieve next argument ";
				break;
				case "va_end":
				comment += "End using variable argument list ";
				break;
				case "va_copy":
				comment += "Copy variable argument list ";
				break;

				case "ptrdiff_t":
				comment += "Result of pointer subtraction ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;
				case "max_align_t":
				comment += "Type with widest scalar alignment ";
				break;
				case "nullptr_t":
				comment += "Null pointer type (C++) ";
				break;
				case "offsetof":
				comment += "Return member offset ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;


				case "remove":
				comment += "Remove file ";
				break;
				case "rename":
				comment += "Rename file ";
				break;
				case "tmpfile":
				comment += "Open a temporary file ";
				break;
				case "tmpnam":
				comment += "Generate temporary filename ";
				break;
				case "fclose":
				comment += "Close file ";
				break;
				case "fflush":
				comment += "Flush stream ";
				break;
				case "fopen":
				comment += "Open file ";
				break;
				case "freopen":
				comment += "Reopen stream with different file or mode ";
				break;
				case "setbuf":
				comment += "Set stream buffer ";
				break;
				case "setvbuf":
				comment += "Change stream buffering ";
				break;
				case "fprintf":
				comment += "Write formatted data to stream ";
				break;
				case "fscanf":
				comment += "Read formatted data from stream ";
				break;
				case "printf":
				comment += "Print formatted data to stdout ";
				break;
				case "scanf":
				comment += "Read formatted data from stdin ";
				break;
				case "snprintf":
				comment += "Write formatted output to sized buffer ";
				break;
				case "sprintf":
				comment += "Write formatted data to string ";
				break;
				case "sscanf":
				comment += "Read formatted data from string ";
				break;
				case "vfprintf":
				comment += "Write formatted data from variable argument list to stream ";
				break;
				case "vfscanf":
				comment += "Read formatted data from stream into variable argument list ";
				break;
				case "vprintf":
				comment += "Print formatted data from variable argument list to stdout ";
				break;
				case "vscanf":
				comment += "Read formatted data into variable argument list ";
				break;
				case "vsnprintf":
				comment += "Write formatted data from variable argument list to sized buffer ";
				break;
				case "vsprintf":
				comment += "Write formatted data from variable argument list to string ";
				break;
				case "vsscanf":
				comment += "Read formatted data from string into variable argument list ";
				break;
				case "fgetc":
				comment += "Get character from stream ";
				break;
				case "fgets":
				comment += "Get string from stream ";
				break;
				case "fputc":
				comment += "Write character to stream ";
				break;
				case "fputs":
				comment += "Write string to stream ";
				break;
				case "getc":
				comment += "Get character from stream ";
				break;
				case "getchar":
				comment += "Get character from stdin ";
				break;
				case "gets":
				comment += "Get string from stdin ";
				break;
				case "putc":
				comment += "Write character to stream ";
				break;
				case "putchar":
				comment += "Write character to stdout ";
				break;
				case "puts":
				comment += "Write string to stdout ";
				break;
				case "ungetc":
				comment += "Unget character from stream ";
				break;
				case "fread":
				comment += "Read block of data from stream ";
				break;
				case "fwrite":
				comment += "Write block of data to stream ";
				break;
				case "fgetpos":
				comment += "Get current position in stream ";
				break;
				case "fseek":
				comment += "Reposition stream position indicator ";
				break;
				case "fsetpos":
				comment += "Set position indicator of stream ";
				break;
				case "ftell":
				comment += "Get current position in stream ";
				break;
				case "rewind":
				comment += "Set position of stream to the beginning ";
				break;
				case "clearerr":
				comment += "Clear error indicators ";
				break;
				case "feof":
				comment += "Check end-of-file indicator ";
				break;
				case "ferror":
				comment += "Check error indicator ";
				break;
				case "perror":
				comment += "Print error message ";
				break;
				case "BUFSIZ":
				comment += "Buffer size ";
				break;
				case "EOF":
				comment += "End-of-File ";
				break;
				case "FILENAME_MAX":
				comment += "Maximum length of file names ";
				break;
				case "FOPEN_MAX":
				comment += "Potential limit of simultaneous open streams ";
				break;
				case "L_tmpnam":
				comment += "Minimum length for temporary file name ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;
				case "TMP_MAX":
				comment += "Number of temporary files ";
				break;
				case "FILE":
				comment += "Object containing information to control a stream ";
				break;
				case "fpos_t":
				comment += "Object containing information to specify a position within a file ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;

				case "atof":
				comment += "Convert string to double ";
				break;
				case "atoi":
				comment += "Convert string to integer ";
				break;
				case "atol":
				comment += "Convert string to long integer ";
				break;
				case "atoll":
				comment += "Convert string to long long integer ";
				break;
				case "strtod":
				comment += "Convert string to double ";
				break;
				case "strtof":
				comment += "Convert string to float ";
				break;
				case "strtol":
				comment += "Convert string to long integer ";
				break;
				case "strtold":
				comment += "Convert string to long double ";
				break;
				case "strtoll":
				comment += "Convert string to long long integer ";
				break;
				case "strtoul":
				comment += "Convert string to unsigned long integer ";
				break;
				case "strtoull":
				comment += "Convert string to unsigned long long integer ";
				break;
				case "rand":
				comment += "Generate random number ";
				break;
				case "srand":
				comment += "Initialize random number generator ";
				break;
				case "calloc":
				comment += "Allocate and zero-initialize array ";
				break;
				case "free":
				comment += "Deallocate memory block ";
				break;
				case "malloc":
				comment += "Allocate memory block ";
				break;
				case "realloc":
				comment += "Reallocate memory block ";
				break;
				case "abort":
				comment += "Abort current process ";
				break;
				case "atexit":
				comment += "Set function to be executed on exit ";
				break;
				case "at_quick_exit":
				comment += "Set function to be executed on quick exit ";
				break;
				case "exit":
				comment += "Terminate calling process ";
				break;
				case "getenv":
				comment += "Get environment string ";
				break;
				case "quick_exit":
				comment += "Terminate calling process quick ";
				break;
				case "system":
				comment += "Execute system command ";
				break;
				case "_Exit":
				comment += "Terminate calling process ";
				break;
				case "bsearch":
				comment += "Binary search in array ";
				break;
				case "qsort":
				comment += "Sort elements of array ";
				break;
				case "abs":
				comment += "Absolute value ";
				break;
				case "div":
				comment += "Integral division ";
				break;
				case "labs":
				comment += "Absolute value ";
				break;
				case "ldiv":
				comment += "Integral division ";
				break;
				case "llabs":
				comment += "Absolute value ";
				break;
				case "lldiv":
				comment += "Integral division ";
				break;
				case "mblen":
				comment += "Get length of multibyte character ";
				break;
				case "mbtowc":
				comment += "Convert multibyte sequence to wide character ";
				break;
				case "wctomb":
				comment += "Convert wide character to multibyte sequence ";
				break;
				case "mbstowcs":
				comment += "Convert multibyte string to wide-character string ";
				break;
				case "wcstombs":
				comment += "Convert wide-character string to multibyte string ";
				break;
				case "EXIT_FAILURE":
				comment += "Failure termination code ";
				break;
				case "EXIT_SUCCESS":
				comment += "Success termination code ";
				break;
				case "MB_CUR_MAX":
				comment += "Maximum size of multibyte characters ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;
				case "RAND_MAX":
				comment += "Maximum value returned by rand ";
				break;
				case "div_t":
				comment += "Structure returned by div ";
				break;
				case "ldiv_t":
				comment += "Structure returned by ldiv ";
				break;
				case "lldiv_t":
				comment += "Structure returned by lldiv ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;

				case "memcpy":
				comment += "Copy block of memory ";
				break;
				case "memmove":
				comment += "Move block of memory ";
				break;
				case "strcpy":
				comment += "Copy string ";
				break;
				case "strncpy":
				comment += "Copy characters from string ";
				break;
				case "strcat":
				comment += "Concatenate strings ";
				break;
				case "strncat":
				comment += "Append characters from string ";
				break;
				case "memcmp":
				comment += "Compare two blocks of memory ";
				break;
				case "strcmp":
				comment += "Compare two strings ";
				break;
				case "strcoll":
				comment += "Compare two strings using locale ";
				break;
				case "strncmp":
				comment += "Compare characters of two strings ";
				break;
				case "strxfrm":
				comment += "Transform string using locale ";
				break;
				case "memchr":
				comment += "Locate character in block of memory ";
				break;
				case "strchr":
				comment += "Locate first occurrence of character in string ";
				break;
				case "strcspn":
				comment += "Get span until character in string ";
				break;
				case "strpbrk":
				comment += "Locate characters in string ";
				break;
				case "strrchr":
				comment += "Locate last occurrence of character in string ";
				break;
				case "strspn":
				comment += "Get span of character set in string ";
				break;
				case "strstr":
				comment += "Locate substring ";
				break;
				case "strtok":
				comment += "Split string into tokens ";
				break;
				case "memset":
				comment += "Fill block of memory ";
				break;
				case "strerror":
				comment += "Get pointer to error message string ";
				break;
				case "strlen":
				comment += "Get string length ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;

				case "clock":
				comment += "Clock program ";
				break;
				case "difftime":
				comment += "Return difference between two times ";
				break;
				case "mktime":
				comment += "Convert tm structure to time_t ";
				break;
				case "time":
				comment += "Get current time ";
				break;
				case "asctime":
				comment += "Convert tm structure to string ";
				break;
				case "ctime":
				comment += "Convert time_t value to string ";
				break;
				case "gmtime":
				comment += "Convert time_t to tm as UTC time ";
				break;
				case "localtime":
				comment += "Convert time_t to tm as local time ";
				break;
				case "strftime":
				comment += "Format time as string ";
				break;
				case "CLOCKS_PER_SEC":
				comment += "Clock ticks per second ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;
				case "clock_t":
				comment += "Clock type ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;
				case "time_t":
				comment += "Time type ";
				break;
				case "struct tm":
				comment += "Time structure "
				break;

				case "c16rtomb":
				comment += "Convert 16-bit character to multibyte sequence ";
				break;
				case "c32rtomb":
				comment += "Convert 32-bit character to multibyte sequence ";
				break;
				case "mbrtoc16":
				comment += "Convert multibyte sequence to 16-bit character ";
				break;
				case "mbrtoc32":
				comment += "Convert multibyte sequence to 32-bit character ";
				break;

				case "fgetwc":
				comment += "Get wide character from stream ";
				break;
				case "fgetws":
				comment += "Get wide string from stream ";
				break;
				case "fputwc":
				comment += "Write wide character to stream ";
				break;
				case "fputws":
				comment += "Write wide string to stream ";
				break;
				case "fwide":
				comment += "Stream orientation ";
				break;
				case "fwprintf":
				comment += "Write formatted data to stream ";
				break;
				case "fwscanf":
				comment += "Read formatted data from stream ";
				break;
				case "getwc":
				comment += "Get wide character from stream ";
				break;
				case "getwchar":
				comment += "Get wide character from stdin ";
				break;
				case "putwc":
				comment += "Write wide character to stream ";
				break;
				case "putwchar":
				comment += "Write wide character to stdout ";
				break;
				case "swprintf":
				comment += "Write formatted data to wide string ";
				break;
				case "swscanf":
				comment += "Read formatted data from string ";
				break;
				case "ungetwc":
				comment += "Unget wide character from stream ";
				break;
				case "vfwprintf":
				comment += "Write formatted data from variable argument list to stream ";
				break;
				case "vfwscanf":
				comment += "Read formatted data from stream into variable argument list ";
				break;
				case "vswprintf":
				comment += "Write formatted data from variable argument list to sized buffer ";
				break;
				case "vswscanf":
				comment += "Read formatted data from wide string into variable argument list ";
				break;
				case "vwprintf":
				comment += "Print formatted data from variable argument list to stdout ";
				break;
				case "vwscanf":
				comment += "Read formatted data into variable argument list ";
				break;
				case "wprintf":
				comment += "Print formatted data to stdout ";
				break;
				case "wscanf":
				comment += "Read formatted data from stdin ";
				break;
				case "wcstod":
				comment += "Convert wide string to double ";
				break;
				case "wcstof":
				comment += "Convert wide string to float ";
				break;
				case "wcstol":
				comment += "Convert wide string to long integer ";
				break;
				case "wcstold":
				comment += "Convert wide string to long double ";
				break;
				case "wcstoll":
				comment += "Convert wide string to long long integer ";
				break;
				case "wcstoul":
				comment += "Convert wide string to unsigned long integer ";
				break;
				case "wcstoull":
				comment += "Convert wide string to unsigned long long integer ";
				break;
				case "btowc":
				comment += "Convert single byte character to wide character ";
				break;
				case "mbrlen":
				comment += "Get length of multibyte character ";
				break;
				case "mbrtowc":
				comment += "Convert multibyte sequence to wide character ";
				break;
				case "mbsinit":
				comment += "Check if initial conversion state ";
				break;
				case "mbsrtowcs":
				comment += "Convert multibyte string to wide-character string ";
				break;
				case "wcrtomb":
				comment += "Convert wide character to multibyte sequence ";
				break;
				case "wctob":
				comment += "Convert wide character to single byte ";
				break;
				case "wcsrtombs":
				comment += "Convert wide-character string to multibyte string ";
				break;
				case "wcscat":
				comment += "Concatenate wide strings ";
				break;
				case "wcschr":
				comment += "Locate first occurrence of character in wide string ";
				break;
				case "wcscmp":
				comment += "Compare two strings ";
				break;
				case "wcscoll":
				comment += "Compare two wide strings using locale ";
				break;
				case "wcscpy":
				comment += "Copy wide string ";
				break;
				case "wcscspn":
				comment += "Get span until character in wide string ";
				break;
				case "wcslen":
				comment += "Get wide string length ";
				break;
				case "wcsncat":
				comment += "Append characters from wide string ";
				break;
				case "wcsncmp":
				comment += "Compare characters of two wide strings ";
				break;
				case "wcsncpy":
				comment += "Copy characters from wide string ";
				break;
				case "wcspbrk":
				comment += "Locate characters in wide string ";
				break;
				case "wcsrchr":
				comment += "Locate last occurrence of character in wide string ";
				break;
				case "wcsspn":
				comment += "Get span of character set in wide string ";
				break;
				case "wcsstr":
				comment += "Locate substring of wide string ";
				break;
				case "wcstok":
				comment += "Split wide string into tokens ";
				break;
				case "wcsxfrm":
				comment += "Transform wide string using locale ";
				break;
				case "wmemchr":
				comment += "Locate character in block of wide characters ";
				break;
				case "wmemcmp":
				comment += "Compare two blocks of wide characters ";
				break;
				case "wmemcpy":
				comment += "Copy block of wide characters ";
				break;
				case "wmemmove":
				comment += "Move block of wide characters ";
				break;
				case "wmemset":
				comment += "Fill array of wide characters ";
				break;
				case "wcsftime":
				comment += "Format time as wide string ";
				break;
				case "mbstate_t":
				comment += "Multibyte conversion state ";
				break;
				case "size_t":
				comment += "Unsigned integral type ";
				break;
				case "struct tm":
				comment += "Time structure "
				break;
				case "wchar_t":
				comment += "Wide character ";
				break;
				case "wint_t":
				comment += "Wide int type ";
				break;
				case "NULL":
				comment += "Null pointer ";
				break;
				case "WCHAR_MAX":
				comment += "Maximum value of wchar_t ";
				break;
				case "WCHAR_MIN":
				comment += "Minimum value of wchar_t ";
				break;
				case "WEOF":
				comment += "Wide end-of-file ";
				break;

				case "iswalnum":
				comment += "Check if wide character is alphanumeric ";
				break;
				case "iswalpha":
				comment += "Check if wide character is alphabetic ";
				break;
				case "iswblank":
				comment += "Check if wide character is blank ";
				break;
				case "iswcntrl":
				comment += "Check if wide character is a control character ";
				break;
				case "iswdigit":
				comment += "Check if wide character is decimal digit ";
				break;
				case "iswgraph":
				comment += "Check if wide character has graphical representation ";
				break;
				case "iswlower":
				comment += "Check if wide character is lowercaseletter ";
				break;
				case "iswprint":
				comment += "Check if wide character is printable ";
				break;
				case "iswpunct":
				comment += "Check if wide character is punctuation character ";
				break;
				case "iswspace":
				comment += "Check if wide character is a white-space ";
				break;
				case "iswupper":
				comment += "Check if wide character is uppercaseletter ";
				break;
				case "iswxdigit":
				comment += "Check if wide character is hexadecimal digit ";
				break;
				case "towlower":
				comment += "Convert uppercasewide character to lowercase "
				break;
				case "towupper":
				comment += "Convert lowercasewide character to uppercase "
				break;
				case "iswctype":
				comment += "Check if wide character has property ";
				break;
				case "towctrans":
				comment += "Convert using transformation ";
				break;
				case "wctrans":
				comment += "Return character transformation ";
				break;
				case "wctype":
				comment += "Return character property ";
				break;
				case "wctrans_t":
				comment += "Wide character transformation ";
				break;
				case "wctype_t":
				comment += "Wide character type ";
				break;
				case "wint_t":
				comment += "Wide character integral type ";
				break;
				case "WEOF":
				comment += "Wide End-of-File ";
				break;

				case "array":
				comment += "Array class ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "bitset":
				comment += "Bitset ";
				break;

				case "deque":
				comment += "Double ended queue ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "forward_list":
				comment += "Forward list ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "list":
				comment += "List ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "map":
				comment += "Map ";
				break;
				case "multimap":
				comment += "Multiple-key map ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "queue":
				comment += "FIFO queue ";
				break;
				case "priority_queue":
				comment += "Priority queue ";
				break;

				case "set":
				comment += "Set ";
				break;
				case "multiset":
				comment += "Multiple-key set ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "stack":
				comment += "LIFO stack ";
				break;

				case "unordered_map":
				comment += "Unordered Map ";
				break;
				case "unordered_multimap":
				comment += "Unordered Multimap ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "unordered_set":
				comment += "Unordered Set ";
				break;
				case "unordered_multiset":
				comment += "Unordered Multiset ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "vector":
				comment += "Vector ";
				break;
				case "vector<;bool>;":
				comment += "Vector of bool ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "atomic":
				comment += "Atomic ";
				break;
				case "atomic_flag":
				comment += "Atomic flag ";
				break;
				case "memory_order":
				comment += "Memory order ";
				break;
				case "kill_dependency":
				comment += "Kill dependency ";
				break;
				case "atomic_thread_fence":
				comment += "Thread fence ";
				break;
				case "atomic_signal_fence":
				comment += "Signal fence ";
				break;
				case "atomic_is_lock_free":
				comment += "Is lock-free ";
				break;
				case "atomic_init":
				comment += "Initialize atomic object ";
				break;
				case "atomic_store":
				comment += "Modify contained value ";
				break;
				case "atomic_store_explicit":
				comment += "Modify contained value (explicit memory order) ";
				break;
				case "atomic_load":
				comment += "Read contained value ";
				break;
				case "atomic_load_explicit":
				comment += "Read contained value (explicit memory order) ";
				break;
				case "atomic_exchange":
				comment += "Read and modify contained value ";
				break;
				case "atomic_exchange_explicit":
				comment += "Read  and modify contained value (explicit memory order) ";
				break;
				case "atomic_compare_exchange_weak":
				comment += "Compare and exchange contained value (weak) ";
				break;
				case "atomic_compare_exchange_weak_explicit":
				comment += "Compare and exchange contained value (weak, explicit) ";
				break;
				case "atomic_compare_exchange_strong":
				comment += "Compare and exchange contained value (strong) ";
				break;
				case "atomic_compare_exchange_strong_explicit":
				comment += "Compare and exchange contained value (strong, explicit) ";
				break;
				case "atomic_fetch_add":
				comment += "Add to contained value ";
				break;
				case "atomic_fetch_add_explicit":
				comment += "Add to contained value (explicit memory order) ";
				break;
				case "atomic_fetch_sub":
				comment += "Subtract from contained value ";
				break;
				case "atomic_fetch_sub_explicit":
				comment += "Subtract from contained value (explicit memory order) ";
				break;
				case "atomic_fetch_and":
				comment += "Apply bitwise AND to contained value ";
				break;
				case "atomic_fetch_and_explicit":
				comment += "Apply bitwise AND to contained value (explicit memory order) ";
				break;
				case "atomic_fetch_or":
				comment += "Apply bitwise OR to contained value ";
				break;
				case "atomic_fetch_or_explicit":
				comment += "Apply bitwise OR to contained value (explicit memory order) ";
				break;
				case "atomic_fetch_xor":
				comment += "Apply bitwise XOR to contained value ";
				break;
				case "atomic_fetch_xor_explicit":
				comment += "Apply bitwise XOR to contained value (explicit memory order) ";
				break;
				case "atomic_flag_test_and_set":
				comment += "Test and set atomic flag ";
				break;
				case "atomic_flag_test_and_set_explicit":
				comment += "Test and set atomic flag (explicit memory order) ";
				break;
				case "atomic_flag_clear":
				comment += "Clear atomic flag ";
				break;
				case "atomic_flag_clear_explicit":
				comment += "Clear atomic flag (explicit memory order) ";
				break;
				case "ATOMIC_VAR_INIT":
				comment += "Initialization of atomic variable ";
				break;
				case "ATOMIC_FLAG_INIT":
				comment += "Initialization of atomic flag ";
				break;

				case "condition_variable":
				comment += "Condition variable ";
				break;
				case "condition_variable_any":
				comment += "Condition variable (any lock) ";
				break;
				case "cv_status":
				comment += "Condition variable status ";
				break;
				case "notify_all_at_thread_exit":
				comment += "Notify all at thread exit ";
				break;

				case "promise":
				comment += "Promise ";
				break;
				case "packaged_task":
				comment += "Packaged task ";
				break;
				case "future":
				comment += "Future ";
				break;
				case "shared_future":
				comment += "Shared future ";
				break;
				case "future_error":
				comment += "Future error exception ";
				break;
				case "future_errc":
				comment += "Error conditions for future objects ";
				break;
				case "future_status":
				comment += "Return value for timed future operations ";
				break;
				case "launch":
				comment += "Launching policy for async ";
				break;
				case "async":
				comment += "Call function asynchronously ";
				break;
				case "future_category":
				comment += "Return future category ";
				break;
				case "mutex":
				comment += "Mutex class ";
				break;
				case "recursive_mutex":
				comment += "Recursive mutex class ";
				break;
				case "timed_mutex":
				comment += "Timed mutex class ";
				break;
				case "recursive_timed_mutex":
				comment += "Recursive timed mutex ";
				break;
				case "lock_guard":
				comment += "Lock guard ";
				break;
				case "unique_lock":
				comment += "Unique lock ";
				break;
				case "once_flag":
				comment += "Flag argument type for call_once ";
				break;
				case "adopt_lock_t":
				comment += "Type of adopt_lock ";
				break;
				case "defer_lock_t":
				comment += "Type of defer_lock ";
				break;
				case "try_to_lock_t":
				comment += "Type of try_to_lock ";
				break;
				case "try_lock":
				comment += "Try to lock multiple mutexes ";
				break;
				case "lock":
				comment += "Lock multiple mutexes ";
				break;
				case "call_once":
				comment += "Call function once "
				break;

				case "thread":
				comment += "Thread ";
				break;
				case "this_thread":
				comment += "This thread ";
				break;

				case "all_of":
				comment += "Test condition on all elements in range ";
				break;
				case "any_of":
				comment += "Test if any element in range fulfills condition ";
				break;
				case "none_of":
				comment += "Test if no elements fulfill condition ";
				break;
				case "for_each":
				comment += "Apply function to range ";
				break;
				case "find":
				comment += "Find value in range ";
				break;
				case "find_if":
				comment += "Find element in range ";
				break;
				case "find_if_not":
				comment += "Find element in range (negative condition) ";
				break;
				case "find_end":
				comment += "Find last subsequence in range ";
				break;
				case "find_first_of":
				comment += "Find element from set in range ";
				break;
				case "adjacent_find":
				comment += "Find equal adjacent elements in range ";
				break;
				case "count":
				comment += "Count appearances of value in range ";
				break;
				case "count_if":
				comment += "Return number of elements in range satisfying condition ";
				break;
				case "mismatch":
				comment += "Return first position where two ranges differ ";
				break;
				case "equal":
				comment += "Test whether the elements in two ranges are equal ";
				break;
				case "is_permutation":
				comment += "Test whether range is permutation of another ";
				break;
				case "search":
				comment += "Search range for subsequence ";
				break;
				case "search_n":
				comment += "Search range for elements ";
				break;
				case "copy":
				comment += "Copy range of elements ";
				break;
				case "copy_n":
				comment += "Copy elements ";
				break;
				case "copy_if":
				comment += "Copy certain elements of range ";
				break;
				case "copy_backward":
				comment += "Copy range of elements backward ";
				break;
				case "move":
				comment += "Move range of elements ";
				break;
				case "move_backward":
				comment += "Move range of elements backward ";
				break;
				case "swap":
				comment += "Exchange values of two objects ";
				break;
				case "swap_ranges":
				comment += "Exchange values of two ranges ";
				break;
				case "iter_swap":
				comment += "Exchange values of objects pointed to by two iterators ";
				break;
				case "transform":
				comment += "Transform range ";
				break;
				case "replace":
				comment += "Replace value in range ";
				break;
				case "replace_if":
				comment += "Replace values in range ";
				break;
				case "replace_copy":
				comment += "Copy range replacing value ";
				break;
				case "replace_copy_if":
				comment += "Copy range replacing value ";
				break;
				case "fill":
				comment += "Fill range with value ";
				break;
				case "fill_n":
				comment += "Fill sequence with value ";
				break;
				case "generate":
				comment += "Generate values for range with function ";
				break;
				case "generate_n":
				comment += "Generate values for sequence with function ";
				break;
				case "remove":
				comment += "Remove value from range ";
				break;
				case "remove_if":
				comment += "Remove elements from range ";
				break;
				case "remove_copy":
				comment += "Copy range removing value ";
				break;
				case "remove_copy_if":
				comment += "Copy range removing values ";
				break;
				case "unique":
				comment += "Remove consecutive duplicates in range ";
				break;
				case "unique_copy":
				comment += "Copy range removing duplicates ";
				break;
				case "reverse":
				comment += "Reverse range ";
				break;
				case "reverse_copy":
				comment += "Copy range reversed ";
				break;
				case "rotate":
				comment += "Rotate left the elements in range ";
				break;
				case "rotate_copy":
				comment += "Copy range rotated left ";
				break;
				case "random_shuffle":
				comment += "Randomly rearrange elements in range ";
				break;
				case "shuffle":
				comment += "Randomly rearrange elements in range using generator ";
				break;
				case "is_partitioned":
				comment += "Test whether range is partitioned ";
				break;
				case "partition":
				comment += "Partition range in two ";
				break;
				case "stable_partition":
				comment += "Partition range in two - stable ordering ";
				break;
				case "partition_copy":
				comment += "Partition range into two ";
				break;
				case "partition_point":
				comment += "Get partition point ";
				break;
				case "sort":
				comment += "Sort elements in range ";
				break;
				case "stable_sort":
				comment += "Sort elements preserving order of equivalents ";
				break;
				case "partial_sort":
				comment += "Partially sort elements in range ";
				break;
				case "partial_sort_copy":
				comment += "Copy and partially sort range ";
				break;
				case "is_sorted":
				comment += "Check whether range is sorted ";
				break;
				case "is_sorted_until":
				comment += "Find first unsorted element in range ";
				break;
				case "nth_element":
				comment += "Sort element in range ";
				break;
				case "lower_bound":
				comment += "Return iterator to lower bound ";
				break;
				case "upper_bound":
				comment += "Return iterator to upper bound ";
				break;
				case "equal_range":
				comment += "Get subrange of equal elements ";
				break;
				case "binary_search":
				comment += "Test if value exists in sorted sequence ";
				break;
				case "merge":
				comment += "Merge sorted ranges ";
				break;
				case "inplace_merge":
				comment += "Merge consecutive sorted ranges ";
				break;
				case "includes":
				comment += "Test whether sorted range includes another sorted range ";
				break;
				case "set_union":
				comment += "Union of two sorted ranges ";
				break;
				case "set_intersection":
				comment += "Intersection of two sorted ranges ";
				break;
				case "set_difference":
				comment += "Difference of two sorted ranges ";
				break;
				case "set_symmetric_difference":
				comment += "Symmetric difference of two sorted ranges ";
				break;
				case "push_heap":
				comment += "Push element into heap range ";
				break;
				case "pop_heap":
				comment += "Pop element from heap range ";
				break;
				case "make_heap":
				comment += "Make heap from range ";
				break;
				case "sort_heap":
				comment += "Sort elements of heap ";
				break;
				case "is_heap":
				comment += "Test if range is heap ";
				break;
				case "is_heap_until":
				comment += "Find first element not in heap order ";
				break;
				case "min":
				comment += "Return the smallest ";
				break;
				case "max":
				comment += "Return the largest ";
				break;
				case "minmax":
				comment += "Return smallest and largest elements ";
				break;
				case "min_element":
				comment += "Return smallest element in range ";
				break;
				case "max_element":
				comment += "Return largest element in range ";
				break;
				case "minmax_element":
				comment += "Return smallest and largest elements in range ";
				break;
				case "lexicographical_compare":
				comment += "Lexicographical less-than comparison ";
				break;
				case "next_permutation":
				comment += "Transform range to next permutation ";
				break;
				case "prev_permutation":
				comment += "Transform range to previous permutation ";
				break;

				case "duration":
				comment += "Duration ";
				break;
				case "time_point":
				comment += "Time point ";
				break;
				case "system_clock":
				comment += "System clock ";
				break;
				case "steady_clock":
				comment += "Steady clock ";
				break;
				case "high_resolution_clock":
				comment += "High resolution clock ";
				break;
				case "treat_as_floating_point":
				comment += "Treat as floating point ";
				break;
				case "duration_values":
				comment += "Duration values ";
				break;
				case "common_type (duration)***":
				comment += "Specialization of common_type for duration "
				break;
				case "duration_cast":
				comment += "Duration cast ";
				break;
				case "time_point_cast":
				comment += "Time_point cast ";
				break;
				case "hours":
				comment += "Duration in hours ";
				break;
				case "minutes":
				comment += "Duration in minutes ";
				break;
				case "seconds":
				comment += "Duration in seconds ";
				break;
				case "milliseconds":
				comment += "Duration in milliseconds ";
				break;
				case "microseconds":
				comment += "Duration in microseconds ";
				break;
				case "nanoseconds":
				comment += "Duration in nanoseconds ";
				break;

				case "codecvt_mode":
				comment += "Codecvt mode ";
				break;
				case "codecvt_utf8":
				comment += "Convert UTF-8 ";
				break;
				case "codecvt_utf16":
				comment += "Convert UTF-16 ";
				break;
				case "codecvt_utf8_utf16":
				comment += "Convert between UTF-8 and UTF-16 ";
				break;

				case "complex":
				comment += "Complex number class ";
				break;
				case "real":
				comment += "Real part of complex ";
				break;
				case "imag":
				comment += "Imaginary part of complex ";
				break;
				case "abs":
				comment += "Absolute value of complex ";
				break;
				case "arg":
				comment += "Phase angle of complex ";
				break;
				case "norm":
				comment += "Norm of complex ";
				break;
				case "conj":
				comment += "Complex conjugate ";
				break;
				case "polar":
				comment += "Complex from polar components ";
				break;
				case "proj":
				comment += "Complex projection. ";
				break;
				case "cos":
				comment += "Cosine of complex ";
				break;
				case "cosh":
				comment += "Hyperbolic cosine of complex ";
				break;
				case "exp":
				comment += "Exponential of complex ";
				break;
				case "log":
				comment += "Natural logarithm of complex ";
				break;
				case "log10":
				comment += "Common logarithm of complex ";
				break;
				case "pow":
				comment += "Power of complex ";
				break;
				case "sin":
				comment += "Sine of complex ";
				break;
				case "sinh":
				comment += "Hyperbolic sine of complex ";
				break;
				case "sqrt":
				comment += "Square root of complex ";
				break;
				case "tan":
				comment += "Tangent of complex ";
				break;
				case "tanh":
				comment += "Hyperbolic tangent of complex ";
				break;
				case "acos":
				comment += "Arc cosine of complex ";
				break;
				case "acosh":
				comment += "Arc hyperbolic cosine of complex ";
				break;
				case "asin":
				comment += "Arc sine of complex ";
				break;
				case "asinh":
				comment += "Arc hyperbolic sine of complex ";
				break;
				case "atan":
				comment += "Arc tangent of complex ";
				break;
				case "atanh":
				comment += "Arc hyperbolic tangent of complex ";
				break;
				case "complex operators":
				comment += "Complex number operators "
				break;
				case "exception":
				comment += "Standard exception class ";
				break;
				case "bad_exception":
				comment += "Exception thrown by unexpected handler ";
				break;
				case "nested_exception":
				comment += "Nested exception class ";
				break;
				case "exception_ptr":
				comment += "Exception pointer ";
				break;
				case "terminate_handler":
				comment += "Type of terminate handler function ";
				break;
				case "unexpected_handler":
				comment += "Type of unexpected handler function ";
				break;
				case "terminate":
				comment += "Function handling termination on exception ";
				break;
				case "get_terminate":
				comment += "Get terminate handler function ";
				break;
				case "set_terminate":
				comment += "Set terminate handler function ";
				break;
				case "unexpected":
				comment += "Function handling unexpected exceptions ";
				break;
				case "get_unexpected":
				comment += "Get unexpected handler function ";
				break;
				case "set_unexpected":
				comment += "Set unexpected handler function ";
				break;
				case "uncaught_exception":
				comment += "Return exception status ";
				break;
				case "current_exception":
				comment += "Get smart pointer to current exception ";
				break;
				case "rethrow_exception":
				comment += "Rethrow exception ";
				break;
				case "make_exception_ptr":
				comment += "Make exception_ptr ";
				break;
				case "throw_with_nested":
				comment += "Throw with nested ";
				break;
				case "rethrow_if_nested":
				comment += "Rethrow if nested ";
				break;

				case "unary_function":
				comment += "Unary function object base class ";
				break;
				case "binary_function":
				comment += "Binary function object base class ";
				break;
				/*
				case "plus":
				comment += "Addition function object class ";
				break;
				case "minus":
				comment += "Subtraction function object class ";
				break;
				case "multiplies":
				comment += "Multiplication function object class ";
				break;
				case "divides":
				comment += "Division function object class ";
				break;
				case "modulus":
				comment += "Modulus function object class ";
				break;
				case "negate":
				comment += "Negative function object class ";
				break;
				case "equal_to":
				comment += "Function object class for equality comparison ";
				break;
				case "not_equal_to":
				comment += "Function object class for non-equality comparison ";
				break;
				case "greater":
				comment += "Function object class for greater-than inequality comparison ";
				break;
				case "less":
				comment += "Function object class for less-than inequality comparison ";
				break;
				case "greater_equal":
				comment += "Function object class for greater-than-or-equal-to comparison ";
				break;
				case "less_equal":
				comment += "Function object class for less-than-or-equal-to comparison ";
				break;
				case "logical_and":
				comment += "Logical AND function object class ";
				break;
				case "logical_or":
				comment += "Logical OR function object class ";
				break;
				case "logical_not":
				comment += "Logical NOT function object class ";
				break;
				case "Negators":
				comment += "Return negation of unary function object ";
				break;
				case "not1":
				comment += "Return negation of binary function object ";
				break;
				case "not2":
				comment += "Return function object with first parameter bound ";
				break;
				
				case "Return function object with second parameter bound ";:
				comment += ""
				break;
				case "bind1st":
				comment += "Convert function pointer to function object ";
				break;
				case "bind2nd":
				comment += "Convert member function to function object (pointer version) ";
				break;
				case "Conversors":
				comment += "Convert member function to function object (reference version) ";
				break;
				case "ptr_fun":
				comment += "Negate unary function object class ";
				break;
				case "mem_fun":
				comment += "Negate binary function object class ";
				break;
				case "mem_fun_ref":
				comment += "Generate function object class with 1st parameter bound ";
				break;
				case "unary_negate":
				comment += "Generate function object class with 2nd parameter bound ";
				break;
				case "binary_negate":
				comment += "Generate unary function object class from pointer ";
				break;
				case "binder1st":
				comment += "Generate binary function object class from pointer ";
				break;
				case "binder2nd":
				comment += "Generate function object class from parameterless member (pointer version) ";
				break;
				case "pointer_to_unary_function":
				comment += "Generate function object class from single-parameter member (pointer version) ";
				break;
				case "pointer_to_binary_function":
				comment += "Generate function object class from const parameterless member (pointer version) ";
				break;
				case "mem_fun_t":
				comment += "Generate function object class from single-parameter const member (pointer version) ";
				break;
				case "mem_fun1_t":
				comment += "Generate function object class from parameterless member (reference version) ";
				break;
				case "const_mem_fun_t":
				comment += "Generate function object class from single-parameter member (reference version) ";
				break;
				case "const_mem_fun1_t":
				comment += "Generate function object class from const parameterless member (reference version) ";
				break;
				case "mem_fun_ref_t":
				comment += "Generate function object class from single-parameter const member (reference version) ";
				break;
				case "mem_fun1_ref_t":
				comment += "Bind function arguments ";
				break;
				case "const_mem_fun_ref_t":
				comment += "Construct reference_wrapper to const ";
				break;
				case "const_mem_fun1_ref_t":
				comment += "Convert member function to function object ";
				break;
				case "bind":
				comment += "Return negation of unary function object ";
				break;
				case "cref":
				comment += "Return negation of binary function object ";
				break;
				case "mem_fn":
				comment += "Construct reference_wrapper ";
				break;
				case "not1":
				comment += "Negate binary function object class ";
				break;
				case "not2":
				comment += "Function wrapper ";
				break;
				case "ref":
				comment += "Reference wrapper ";
				break;
				case "binary_negate":
				comment += "Negate unary function object class ";
				break;
				case "function":
				comment += "Bitwise AND function object class ";
				break;
				case "reference_wrapper":
				comment += "Bitwise OR function object class ";
				break;
				case "unary_negate":
				comment += "Bitwise XOR function object class ";
				break;
				case "bit_and":
				comment += "Division function object class ";
				break;
				case "bit_or":
				comment += "Function object class for equality comparison ";
				break;
				case "bit_xor":
				comment += "Function object class for greater-than inequality comparison ";
				break;
				case "divides":
				comment += "Function object class for greater-than-or-equal-to comparison ";
				break;
				case "equal_to":
				comment += "Function object class for less-than inequality comparison ";
				break;
				case "greater":
				comment += "Function object class for less-than-or-equal-to comparison ";
				break;
				case "greater_equal":
				comment += "Logical AND function object class ";
				break;
				case "less":
				comment += "Logical NOT function object class ";
				break;
				case "less_equal":
				comment += "Logical OR function object class ";
				break;
				case "logical_and":
				comment += "Subtraction function object class ";
				break;
				case "logical_not":
				comment += "Modulus function object class ";
				break;
				case "logical_or":
				comment += "Multiplication function object class ";
				break;
				case "minus":
				comment += "Negative function object class ";
				break;
				case "modulus":
				comment += "Function object class for non-equality comparison ";
				break;
				case "multiplies":
				comment += "Addition function object class ";
				break;
				case "negate":
				comment += "Exception thrown on bad call ";
				break;
				case "not_equal_to":
				comment += "Default hash function object class ";
				break;
				case "plus":
				comment += "Is bind expression ";
				break;
				case "bad_function_call":
				comment += "Is placeholder ";
				break;
				case "hash":
				comment += "Bind argument placeholders ";
				break;
				case "is_bind_expression":
				comment += ""
				break;
				case "is_placeholder":
				comment += ""
				break;
				case "placeholders":
				comment += ""
				break;
		*/
				case "initializer_list":
				comment += "Initializer list ";
				break;

				case "advance":
				comment += "Advance iterator ";
				break;
				case "distance":
				comment += "Return distance between iterators ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;
				case "prev":
				comment += "Get iterator to previous element ";
				break;
				case "next":
				comment += "Get iterator to next element ";
				break;
				case "back_inserter":
				comment += "Construct back insert iterator ";
				break;
				case "front_inserter":
				comment += "Constructs front insert iterator ";
				break;
				case "inserter":
				comment += "Construct insert iterator ";
				break;
				case "make_move_iterator":
				comment += "Construct move iterator ";
				break;
				case "iterator":
				comment += "Iterator base class ";
				break;
				case "iterator_traits":
				comment += "Iterator traits ";
				break;
				case "reverse_iterator":
				comment += "Reverse iterator ";
				break;
				case "move_iterator":
				comment += "Move iterator ";
				break;
				case "back_insert_iterator":
				comment += "Back insert iterator ";
				break;
				case "front_insert_iterator":
				comment += "Front insert iterator ";
				break;
				case "insert_iterator":
				comment += "Insert iterator ";
				break;
				case "istream_iterator":
				comment += "Istream iterator ";
				break;
				case "ostream_iterator":
				comment += "Ostream iterator ";
				break;
				case "istreambuf_iterator":
				comment += "Input stream buffer iterator ";
				break;
				case "ostreambuf_iterator":
				comment += "Output stream buffer iterator ";
				break;
				case "input_iterator_tag":
				comment += "Input iterator category ";
				break;
				case "output_iterator_tag":
				comment += "Output iterator category ";
				break;
				case "forward_iterator_tag":
				comment += "Forward iterator category ";
				break;
				case "bidirectional_iterator_tag":
				comment += "Bidirectional iterator category ";
				break;
				case "random_access_iterator_tag":
				comment += "Random-access iterator category ";
				break;

				case "numeric_limits":
				comment += "Numeric limits type ";
				break;
				case "float_round_style":
				comment += "Enum type for float rounding style ";
				break;
				case "float_denorm_style":
				comment += "Enum type for float denormalization style ";
				break;

				case "use_facet":
				comment += "Access facet of locale ";
				break;
				case "has_facet":
				comment += "Check if locale has facet ";
				break;
				case "isspace":
				comment += "Check if character is a white-space ";
				break;
				case "isprint":
				comment += "Check if character is printable ";
				break;
				case "iscntrl":
				comment += "Check if character is a control character ";
				break;
				case "isupper":
				comment += "Check if character is uppercaseletter ";
				break;
				case "islower":
				comment += "Check if character is lowercaseletter ";
				break;
				case "isalpha":
				comment += "Check if character is alphabetic ";
				break;
				case "isdigit":
				comment += "Check if character is decimal digit ";
				break;
				case "ispunct":
				comment += "Check if character is a punctuation character ";
				break;
				case "isxdigit":
				comment += "Check if character is hexadecimal digit ";
				break;
				case "isalnum":
				comment += "Check if character is alphanumeric ";
				break;
				case "isgraph":
				comment += "Check if character has graphical representation ";
				break;
				case "isblank":
				comment += "Check if character is blank ";
				break;
				case "locale":
				comment += "Locale class ";
				break;
				case "ctype":
				comment += "Character type facet ";
				break;
				case "ctype_byname":
				comment += "Character type facet ";
				break;
				case "codecvt":
				comment += "Convert codeset facet ";
				break;
				case "codecvt_byname":
				comment += "Convert codeset facet ";
				break;
				case "num_get":
				comment += "Facet to parse numeric values ";
				break;
				case "num_put":
				comment += "Facet to format numeric values ";
				break;
				case "numpunct":
				comment += "Numeric punctuation facet ";
				break;
				case "numpunct_byname":
				comment += "Numeric puntuation facet ";
				break;
				case "collate":
				comment += "Facet to compare and hash strings ";
				break;
				case "collate_byname":
				comment += "Facet to compare and hash strings ";
				break;
				case "time_get":
				comment += "Facet to parse dates and times ";
				break;
				case "time_get_byname":
				comment += "Facet to parse dates and times ";
				break;
				case "time_put":
				comment += "Facet to format dates and times ";
				break;
				case "time_put_byname":
				comment += "Facet to format dates and times ";
				break;
				case "money_get":
				comment += "Facet to parse monetary expressions ";
				break;
				case "money_put":
				comment += "Facet to format monetary expressions ";
				break;
				case "moneypunct":
				comment += "Monetary punctuation facet ";
				break;
				case "moneypunct_byname":
				comment += "Monetary punctuation facet ";
				break;
				case "messages":
				comment += "Facet to access message catalogs ";
				break;
				case "messages_byname":
				comment += "Facet to access message catalogs  ";
				break;
				case "ctype_base":
				comment += "Base class for ctype ";
				break;
				case "codecvt_base":
				comment += "Base class for codecvt ";
				break;
				case "time_base":
				comment += "Base class for time_get ";
				break;
				case "money_base":
				comment += "Base class for moneypunct ";
				break;

				case "allocator":
				comment += "Default allocator ";
				break;
				case "allocator_arg":
				comment += "Allocator arg ";
				break;
				case "allocator_arg_t":
				comment += "Allocator arg type ";
				break;
				case "allocator_traits":
				comment += "Allocator traits ";
				break;
				case "auto_ptr":
				comment += "Automatic Pointer [deprecated] ";
				break;
				case "auto_ptr_ref":
				comment += "Reference to automatic pointer ";
				break;
				case "shared_ptr":
				comment += "Shared pointer ";
				break;
				case "weak_ptr":
				comment += "Weak shared pointer ";
				break;
				case "unique_ptr":
				comment += "Unique pointer ";
				break;
				case "default_delete":
				comment += "Default deleter ";
				break;
				case "make_shared":
				comment += "Make shared_ptr ";
				break;
				case "allocate_shared":
				comment += "Allocate shared_ptr ";
				break;
				case "static_pointer_cast":
				comment += "Static cast of shared_ptr ";
				break;
				case "dynamic_pointer_cast":
				comment += "Dynamic cast of shared_ptr ";
				break;
				case "const_pointer_cast":
				comment += "Const cast of shared_ptr ";
				break;
				case "get_deleter":
				comment += "Get deleter from shared_ptr ";
				break;
				case "owner_less":
				comment += "Owner-based less-than operation ";
				break;
				case "enable_shared_from_this":
				comment += "Enable shared_from_this ";
				break;
				case "raw_storage_iterator":
				comment += "Raw storage iterator ";
				break;
				case "get_temporary_buffer":
				comment += "Get block of temporary memory ";
				break;
				case "return_temporary_buffer":
				comment += "Return block of temporary memory ";
				break;
				case "uninitialized_copy":
				comment += "Copy block of memory ";
				break;
				case "uninitialized_copy_n":
				comment += "Copy block of memory ";
				break;
				case "uninitialized_fill":
				comment += "Fill block of memory ";
				break;
				case "uninitialized_fill_n":
				comment += "Fill block of memory ";
				break;
				case "pointer_traits":
				comment += "Pointer traits ";
				break;
				case "pointer_safety":
				comment += "Pointer safety enum ";
				break;
				case "declare_reachable":
				comment += "Declare pointer as reachable ";
				break;
				case "undeclare_reachable":
				comment += "Undeclare pointer as reachable ";
				break;
				case "declare_no_pointers":
				comment += "Declare memory block as containing no pointers ";
				break;
				case "undeclare_no_pointers":
				comment += "Undeclare memory block as containing no pointers ";
				break;
				case "get_pointer_safety":
				comment += "Get pointer safety ";
				break;
				case "align":
				comment += "Align in range ";
				break;
				case "addressof":
				comment += "Address of object or function ";
				break;

				case "operator new":
				comment += "Allocate storage space "
				break;
				case "operator new[]":
				comment += "Allocate storage space for array "
				break;
				case "operator delete":
				comment += "Deallocate storage space "
				break;
				case "operator delete[]":
				comment += "Deallocate storage space of array "
				break;
				case "set_new_handler":
				comment += "Set new handler function ";
				break;
				case "get_new_handler":
				comment += "Get new handler function ";
				break;
				case "nothrow_t":
				comment += "Nothrow type ";
				break;
				case "new_handler":
				comment += "Type of new handler function ";
				break;
				case "bad_alloc":
				comment += "Exception thrown on failure allocating memory ";
				break;
				case "bad_array_new_length":
				comment += "Exception on bad array length ";
				break;
				case "nothrow":
				comment += "Nothrow constant ";
				break;

				case "accumulate":
				comment += "Accumulate values in range ";
				break;
				case "adjacent_difference":
				comment += "Compute adjacent difference of range ";
				break;
				case "inner_product":
				comment += "Compute cumulative inner product of range ";
				break;
				case "partial_sum":
				comment += "Compute partial sums of range ";
				break;
				case "iota":
				comment += "Store increasing sequence ";
				break;

				case "linear_congruential_engine":
				comment += "Linear congruential random number engine ";
				break;
				case "mersenne_twister_engine":
				comment += "Mersenne twister random number engine ";
				break;
				case "subtract_with_carry_engine":
				comment += "Subtract-with-carry random number engine ";
				break;
				case "discard_block_engine":
				comment += "Discard-block random number engine adaptor ";
				break;
				case "independent_bits_engine":
				comment += "Independent-bits random number engine adaptor ";
				break;
				case "shuffle_order_engine":
				comment += "Shuffle-order random number engine adaptor ";
				break;
				case "default_random_engine":
				comment += "Default random engine ";
				break;
				case "minstd_rand":
				comment += "Minimal Standard minstd_rand generator ";
				break;
				case "minstd_rand0":
				comment += "Minimal Standard minstd_rand0 generator ";
				break;
				case "mt19937":
				comment += "Mersenne Twister 19937 generator ";
				break;
				case "mt19937_64":
				comment += "Mersenne Twister 19937 generator (64 bit) ";
				break;
				case "ranlux24_base":
				comment += "Ranlux 24 base generator ";
				break;
				case "ranlux48_base":
				comment += "Ranlux 48 base generator ";
				break;
				case "ranlux24":
				comment += "Ranlux 24 generator ";
				break;
				case "ranlux48":
				comment += "Ranlux 48 generator ";
				break;
				case "knuth_b":
				comment += "Knuth-B generator ";
				break;
				case "random_device":
				comment += "True random number generator ";
				break;
				case "uniform_int_distribution":
				comment += "Uniform discrete distribution ";
				break;
				case "uniform_real_distribution":
				comment += "Uniform real distribution ";
				break;
				case "bernoulli_distribution":
				comment += "Bernoulli distribution ";
				break;
				case "binomial_distribution":
				comment += "Binomial distribution ";
				break;
				case "geometric_distribution":
				comment += "Geometric distribution ";
				break;
				case "negative_binomial_distribution":
				comment += "Negative binomial distribution ";
				break;
				case "poisson_distribution":
				comment += "Poisson distribution ";
				break;
				case "exponential_distribution":
				comment += "Exponential distribution ";
				break;
				case "gamma_distribution":
				comment += "Gamma distribution ";
				break;
				case "weibull_distribution":
				comment += "Weibull distribution ";
				break;
				case "extreme_value_distribution":
				comment += "Extreme Value distribution ";
				break;
				case "normal_distribution":
				comment += "Normal distribution ";
				break;
				case "lognormal_distribution":
				comment += "Lognormal distribution ";
				break;
				case "chi_squared_distribution":
				comment += "Chi-squared distribution ";
				break;
				case "cauchy_distribution":
				comment += "Cauchy distribution ";
				break;
				case "fisher_f_distribution":
				comment += "Fisher F-distribution ";
				break;
				case "student_t_distribution":
				comment += "Student T-Distribution ";
				break;
				case "discrete_distribution":
				comment += "Discrete distribution ";
				break;
				case "piecewise_constant_distribution":
				comment += "Piecewise constant distribution ";
				break;
				case "piecewise_linear_distribution":
				comment += "Piecewise linear distribution ";
				break;
				case "seed_seq":
				comment += "Seed sequence ";
				break;
				case "generate_canonical":
				comment += "Generate canonical numbers ";
				break;

				case "ratio":
				comment += "Ratio ";
				break;
				case "ratio_add":
				comment += "Add two ratios ";
				break;
				case "ratio_subtract":
				comment += "Subtract ratios ";
				break;
				case "ratio_multiply":
				comment += "Multiply two ratios ";
				break;
				case "ratio_divide":
				comment += "Divide ratios ";
				break;
				case "ratio_equal":
				comment += "Compare ratios ";
				break;
				case "ratio_not_equal":
				comment += "Compare ratios for inequality ";
				break;
				case "ratio_less":
				comment += "Compare ratios for less-than inequality ";
				break;
				case "ratio_less_equal":
				comment += "Compare ratios for equality or less-than inequality ";
				break;
				case "ratio_greater":
				comment += "Compare ratios for greater than inequality ";
				break;
				case "ratio_greater_equal":
				comment += "Compare ratios for equality or greater-than inequality ";
				break;

				case "regex_match":
				comment += "Match sequence ";
				break;
				case "regex_search":
				comment += "Search sequence ";
				break;
				case "regex_replace":
				comment += "Replace matched sequence ";
				break;
				case "regex_iterator":
				comment += "Regex iterator ";
				break;
				case "regex_token_iterator":
				comment += "Regex token iterator ";
				break;
				case "basic_regex":
				comment += "Regular expression ";
				break;
				case "match_results":
				comment += "Match results ";
				break;
				case "sub_match":
				comment += "Sub-expression match ";
				break;
				case "regex_traits":
				comment += "Regex traits ";
				break;
				case "regex_error":
				comment += "Regex exception ";
				break;
				case "regex":
				comment += "Regex ";
				break;
				case "wregex":
				comment += "Regex for wchar_t ";
				break;
				case "cmatch":
				comment += "match_results for string literals ";
				break;
				case "wcmatch":
				comment += "match_results for wide string literals ";
				break;
				case "smatch":
				comment += "match_results for string objects ";
				break;
				case "wsmatch":
				comment += "match_results for wide string objects ";
				break;
				case "csub_match":
				comment += "sub_match for string literals ";
				break;
				case "wcsub_match":
				comment += "sub_match for wide string literals ";
				break;
				case "ssub_match":
				comment += "sub_match for strings ";
				break;
				case "wssub_match":
				comment += "sub_match for wide strings ";
				break;
				case "regex_constants":
				comment += "regex constants ";
				break;
				case "ECMAScript syntax":
				comment += "ECMAScript regular expressions pattern syntax "
				break;
				
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "logic_error":
				comment += "Logic error exception ";
				break;
				case "domain_error":
				comment += "Domain error exception ";
				break;
				case "invalid_argument":
				comment += "Invalid argument exception ";
				break;
				case "length_error":
				comment += "Length error exception ";
				break;
				case "out_of_range":
				comment += "Out-of-range exception ";
				break;
				case "runtime_error":
				comment += "Runtime error exception ";
				break;
				case "range_error":
				comment += "Range error exception ";
				break;
				case "overflow_error":
				comment += "Overflow error exception ";
				break;
				case "underflow_error":
				comment += "Underflow error exception ";
				break;

				case "basic_string":
				comment += "Generic string class ";
				break;
				case "char_traits":
				comment += "Character traits ";
				break;
				case "string":
				comment += "String class ";
				break;
				case "u16string":
				comment += "String of 16-bit characters ";
				break;
				case "u32string":
				comment += "String of 32-bit characters ";
				break;
				case "wstring":
				comment += "Wide string ";
				break;
				case "stoi":
				comment += "Convert string to integer ";
				break;
				case "stol":
				comment += "Convert string to long int ";
				break;
				case "stoul":
				comment += "Convert string to unsigned integer ";
				break;
				case "stoll":
				comment += "Convert string to long long ";
				break;
				case "stoull":
				comment += "Convert string to unsigned long long ";
				break;
				case "stof":
				comment += "Convert string to float ";
				break;
				case "stod":
				comment += "Convert string to double ";
				break;
				case "stold":
				comment += "Convert string to long double ";
				break;
				case "to_string":
				comment += "Convert numerical value to string ";
				break;
				case "to_wstring":
				comment += "Convert numerical value to wide string ";
				break;
				case "begin":
				comment += "Iterator to beginning ";
				break;
				case "end":
				comment += "Iterator to end ";
				break;

				case "error_category":
				comment += "Error category ";
				break;
				case "error_code":
				comment += "Error code ";
				break;
				case "error_condition":
				comment += "Error condition ";
				break;
				case "system_error":
				comment += "System error exception ";
				break;
				case "is_error_code_enum":
				comment += "error_code enum flag ";
				break;
				case "is_error_condition_enum":
				comment += "error_condition enum flag ";
				break;
				case "errc":
				comment += "Generic error conditions ";
				break;
				case "generic_category":
				comment += "Return generic category ";
				break;
				case "system_category":
				comment += "Return system category ";
				break;
				case "make_error_code":
				comment += "Make error code ";
				break;
				case "make_error_condition":
				comment += "Make error condition ";
				break;

				case "tuple":
				comment += "Tuple ";
				break;
				case "tuple_size":
				comment += "Tuple size traits ";
				break;
				case "tuple_element":
				comment += "Tuple element type ";
				break;
				case "make_tuple":
				comment += "Construct tuple ";
				break;
				case "forward_as_tuple":
				comment += "Forward as tuple ";
				break;
				case "tie":
				comment += "Tie arguments to tuple elements ";
				break;
				case "tuple_cat":
				comment += "Concatenate tuples ";
				break;
				case "get":
				comment += "Get element ";
				break;
				case "ignore":
				comment += "Ignore assignment ";
				break;

				case "type_index":
				comment += "Type index ";
				break;
				case "hash<;type_index>;":
				comment += "Hash for type_index ";
				break;

				case "type_info":
				comment += "Type information type ";
				break;
				case "bad_cast":
				comment += "Exception thrown on failure to dynamic cast ";
				break;
				case "bad_typeid":
				comment += "Exception thrown on typeid of null pointer ";
				break;

				case "integral_constant":
				comment += "Integral constant ";
				break;
				case "true_type":
				comment += "True type ";
				break;
				case "false_type":
				comment += "False type ";
				break;
				case "is_array":
				comment += "Is array ";
				break;
				case "is_class":
				comment += "Is non-union class ";
				break;
				case "is_enum":
				comment += "Is enum ";
				break;
				case "is_floating_point":
				comment += "Is floating point ";
				break;
				case "is_function":
				comment += "Is function ";
				break;
				case "is_integral":
				comment += "Is integral ";
				break;
				case "is_lvalue_reference":
				comment += "Is lvalue reference ";
				break;
				case "is_member_function_pointer":
				comment += "Is member function pointer ";
				break;
				case "is_member_object_pointer":
				comment += "Is member object pointer ";
				break;
				case "is_pointer":
				comment += "Is pointer ";
				break;
				case "is_rvalue_reference":
				comment += "Is rvalue reference ";
				break;
				case "is_union":
				comment += "Is union ";
				break;
				case "is_void":
				comment += "Is void ";
				break;
				case "is_arithmetic":
				comment += "Is arithmetic type ";
				break;
				case "is_compound":
				comment += "Is compound type ";
				break;
				case "is_fundamental":
				comment += "Is fundamental type ";
				break;
				case "is_member_pointer":
				comment += "Is member pointer type ";
				break;
				case "is_object":
				comment += "Is object type ";
				break;
				case "is_reference":
				comment += "Is reference type ";
				break;
				case "is_scalar":
				comment += "Is scalar type ";
				break;
				case "is_abstract":
				comment += "Is abstract class ";
				break;
				case "is_const":
				comment += "Is const-qualified ";
				break;
				case "is_empty":
				comment += "Is empty class ";
				break;
				case "is_literal_type":
				comment += "Is literal type ";
				break;
				case "is_pod":
				comment += "Is POD type ";
				break;
				case "is_polymorphic":
				comment += "Is polymorphic ";
				break;
				case "is_signed":
				comment += "Is signed type ";
				break;
				case "is_standard_layout":
				comment += "Is standard-layout type ";
				break;
				case "is_trivial":
				comment += "Is trivial type ";
				break;
				case "is_trivially_copyable":
				comment += "Is trivially copyable ";
				break;
				case "is_unsigned":
				comment += "Is unsigned type ";
				break;
				case "is_volatile":
				comment += "Is volatile-qualified ";
				break;
				case "has_virtual_destructor":
				comment += "Has virtual destructor ";
				break;
				case "is_assignable":
				comment += "Is assignable ";
				break;
				case "is_constructible":
				comment += "Is constructible ";
				break;
				case "is_copy_assignable":
				comment += "Is copy assignable ";
				break;
				case "is_copy_constructible":
				comment += "Is copy constructible ";
				break;
				case "is_destructible":
				comment += "Is destructible ";
				break;
				case "is_default_constructible":
				comment += "Is default constructible ";
				break;
				case "is_move_assignable":
				comment += "Is move assignable ";
				break;
				case "is_move_constructible":
				comment += "Is move constructible ";
				break;
				case "is_trivially_assignable":
				comment += "Is trivially assignable ";
				break;
				case "is_trivially_constructible":
				comment += "Is trivially constructible ";
				break;
				case "is_trivially_copy_assignable":
				comment += "Is trivially copy assignable ";
				break;
				case "is_trivially_copy_constructible":
				comment += "Is trivially copy constructible ";
				break;
				case "is_trivially_destructible":
				comment += "Is trivially destructible ";
				break;
				case "is_trivially_default_constructible":
				comment += "Is trivially default constructible ";
				break;
				case "is_trivially_move_assignable":
				comment += "Is trivially move assignable ";
				break;
				case "is_trivially_move_constructible":
				comment += "Is trivially move constructible ";
				break;
				case "is_nothrow_assignable":
				comment += "Is assignable throwing no exceptions ";
				break;
				case "is_nothrow_constructible":
				comment += "Is constructible  throwing no exceptions ";
				break;
				case "is_nothrow_copy_assignable":
				comment += "Is copy assignable throwing no exceptions ";
				break;
				case "is_nothrow_copy_constructible":
				comment += "Is copy constructible throwing no exceptions ";
				break;
				case "is_nothrow_destructible":
				comment += "Is nothrow destructible ";
				break;
				case "is_nothrow_default_constructible":
				comment += "Is default constructible throwing no exceptions ";
				break;
				case "is_nothrow_move_assignable":
				comment += "Is move assignable throwing no exception ";
				break;
				case "is_nothrow_move_constructible":
				comment += "Is move constructible throwing no exceptions ";
				break;
				case "is_base_of":
				comment += "Is base class of ";
				break;
				case "is_convertible":
				comment += "Is convertible ";
				break;
				case "is_same":
				comment += "Is same type ";
				break;
				case "alignment_of":
				comment += "Alignment of ";
				break;
				case "extent":
				comment += "Array dimension extent ";
				break;
				case "rank":
				comment += "Array rank ";
				break;
				case "add_const":
				comment += "Add const qualification ";
				break;
				case "add_cv":
				comment += "Add const volatile qualification ";
				break;
				case "add_volatile":
				comment += "Add volatile qualification ";
				break;
				case "remove_const":
				comment += "Remove const qualification ";
				break;
				case "remove_cv":
				comment += "Remove cv qualification ";
				break;
				case "remove_volatile":
				comment += "Remove volatile qualification ";
				break;
				case "add_pointer":
				comment += "Add pointer ";
				break;
				case "add_lvalue_reference":
				comment += "Add lvalue reference ";
				break;
				case "add_rvalue_reference":
				comment += "Add rvalue reference ";
				break;
				case "decay":
				comment += "Decay type ";
				break;
				case "make_signed":
				comment += "Make signed ";
				break;
				case "make_unsigned":
				comment += "Make unsigned ";
				break;
				case "remove_all_extents":
				comment += "Remove all array extents ";
				break;
				case "remove_extent":
				comment += "Remove array extent ";
				break;
				case "remove_pointer":
				comment += "Remove pointer ";
				break;
				case "remove_reference":
				comment += "Remove reference ";
				break;
				case "underlying_type":
				comment += "Underlying type of enum ";
				break;
				case "aligned_storage":
				comment += "Aligned storage ";
				break;
				case "aligned_union":
				comment += "Aligned union ";
				break;
				case "common_type":
				comment += "Common type ";
				break;
				case "conditional":
				comment += "Conditional type ";
				break;
				case "enable_if":
				comment += "Enable type if condition is met ";
				break;
				case "result_of":
				comment += "Result of call ";
				break;
		/*
				case "Generic":
				comment += "relational"
				break;
				case "operators":
				comment += "Exchange values of two objects ";
				break;
				case "Rvalue":
				comment += "casts"
				break;
				case "(C++11)":
				comment += "Construct pair object ";
				break;
				case "Generic":
				comment += "swap"
				break;
				case "function":
				comment += "Forward argument ";
				break;
				case "swap":
				comment += "Move as rvalue ";
				break;
				case "make_pair":
				comment += "Move if noexcept ";
				break;
				case "forward":
				comment += "Declaration value ";
				break;
				case "move":
				comment += "Pair of values ";
				break;
				case "move_if_noexcept":
				comment += "Piecewise construct type ";
				break;
				case "declval":
				comment += "Piecewise construct constant ";
				break;
				case "pair":
				comment += "Relational Operators ";
				break;
				case "piecewise_construct_t":
				comment += ""
				break;
				case "piecewise_construct":
				comment += ""
				break;
				case "rel_ops":
				comment += ""
				break;
		*/
				case "valarray":
				comment += "Valarray class ";
				break;
				case "slice":
				comment += "Valarray slice selector ";
				break;
				case "gslice":
				comment += "Valarray generalized slice selector ";
				break;
				case "slice_array":
				comment += "Valarray slice selection ";
				break;
				case "gslice_array":
				comment += "Valarray gslice selection ";
				break;
				case "mask_array":
				comment += "Valarray mask selection ";
				break;
				case "indirect_array":
				comment += "Valarray indirect selection ";
				break;
				case "abs":
				comment += "Compute absolute value of valarray elements ";
				break;
				case "acos":
				comment += "Compute arc cosine of valarray elements ";
				break;
				case "asin":
				comment += "Compute arc sine of valarray elements ";
				break;
				case "atan":
				comment += "Compute arc tangent of valarray elements ";
				break;
				case "atan2":
				comment += "Compute atan2 of valarray elements ";
				break;
				case "cos":
				comment += "Compute cosine of valarray elements ";
				break;
				case "cosh":
				comment += "Compute hyperbolic cosine of valarray elements ";
				break;
				case "exp":
				comment += "Compute exponential of valarray elements ";
				break;
				case "log":
				comment += "Compute natural logarithm of valarray elements ";
				break;
				case "log10":
				comment += "Compute common logarithm of valarray elements ";
				break;
				case "pow":
				comment += "Compute power of valarray elements ";
				break;
				case "sin":
				comment += "Compute sine of valarray elements ";
				break;
				case "sinh":
				comment += "Compute hyperbolic sine of valarray elements ";
				break;
				case "sqrt":
				comment += "Compute square root of valarray elements ";
				break;
				case "tan":
				comment += "Compute tangent of valarray elements ";
				break;
				case "tanh":
				comment += "Compute hyperbolic tangent of valarray elements ";
				break;
				case "Valarray operators ";:
				comment += ""
				break;
			}
			return comment;
		}
}cppdict;
