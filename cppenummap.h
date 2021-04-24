#include <map>
#include <string>
using namespace std;
namespace kwd {
	enum Options{
		opt1, 
		opt2, 
		opt3, 
		opt4, 
		opt5, 
		opt6, 
		opt7, 
		opt8, 
		opt9, 
		opt10, 
		opt11, 
		opt12, 
		opt13, 
		opt14, 
		opt15, 
		opt16, 
		opt17, 
		opt18, 
		opt19, 
		opt20, 
		opt21, 
		opt22, 
		opt23, 
		opt24, 
		opt25, 
		opt26, 
		opt27, 
		opt28, 
		opt29, 
		opt30, 
		opt31, 
		opt32, 
		opt33, 
		opt34, 
		opt35, 
		opt36, 
		opt37, 
		opt38, 
		opt39, 
		opt40, 
		opt41, 
		opt42, 
		opt43, 
		opt44, 
		opt45, 
		opt46, 
		opt47, 
		opt48, 
		opt49, 
		opt50, 
		opt51, 
		opt52, 
		opt53, 
		opt54, 
		opt55, 
		opt56, 
		opt57, 
		opt58, 
		opt59, 
		opt60, 
		opt61, 
		opt62, 
		opt63, 
		opt64, 
		opt65, 
		opt66, 
		opt67, 
		opt68, 
		opt69, 
		opt70, 
		opt71, 
		opt72, 
		opt73, 
		opt74, 
		opt75, 
		opt76, 
		opt77, 
		opt78, 
		opt79, 
		opt80, 
		opt81, 
		opt82, 
		opt83, 
		opt84, 
		opt85, 
		opt86, 
		opt87, 
		opt88, 
		opt89, 
		opt90, 
		opt91, 
		opt92, 
		opt93, 
		opt94, 
		opt95, 
		opt96, 
		opt97, 
		opt98, 
		opt99, 
		opt100, 
		opt101, 
		opt102, 
		opt103, 
		opt104, 
		opt105, 
		opt106, 
		opt107, 
		opt108, 
		opt109, 
		opt110, 
		opt111, 
		opt112, 
		opt113, 
		opt114, 
		opt115, 
		opt116, 
		opt117, 
		opt118, 
		opt119, 
		opt120, 
		opt121, 
		opt122, 
		opt123, 
		opt124, 
		opt125, 
		opt126, 
		opt127, 
		opt128, 
		opt129, 
		opt130, 
		opt131, 
		opt132, 
		opt133, 
		opt134, 
		opt135, 
		opt136, 
		opt137, 
		opt138, 
		opt139, 
		opt140, 
		opt141, 
		opt142, 
		opt143, 
		opt144, 
		opt145, 
		opt146, 
		opt147, 
		opt148, 
		opt149, 
		opt150, 
		opt151, 
		opt152, 
		opt153, 
		opt154, 
		opt155, 
		opt156, 
		opt157, 
		opt158, 
		opt159, 
		opt160, 
		opt161, 
		opt162, 
		opt163, 
		opt164, 
		opt165, 
		opt166, 
		opt167, 
		opt168, 
		opt169, 
		opt170, 
		opt171, 
		opt172, 
		opt173, 
		opt174, 
		opt175, 
		opt176, 
		opt177, 
		opt178, 
		opt179, 
		opt180, 
		opt181, 
		opt182, 
		opt183, 
		opt184, 
		opt185, 
		opt186, 
		opt187, 
		opt188, 
		opt189, 
		opt190, 
		opt191, 
		opt192, 
		opt193, 
		opt194, 
		opt195, 
		opt196, 
		opt197, 
		opt198, 
		opt199, 
		opt200, 
		opt201, 
		opt202, 
		opt203, 
		opt204, 
		opt205, 
		opt206, 
		opt207, 
		opt208, 
		opt209, 
		opt210, 
		opt211, 
		opt212, 
		opt213, 
		opt214, 
		opt215, 
		opt216, 
		opt217, 
		opt218, 
		opt219, 
		opt220, 
		opt221, 
		opt222, 
		opt223, 
		opt224, 
		opt225, 
		opt226, 
		opt227, 
		opt228, 
		opt229, 
		opt230, 
		opt231, 
		opt232, 
		opt233, 
		opt234, 
		opt235, 
		opt236, 
		opt237, 
		opt238, 
		opt239, 
		opt240, 
		opt241, 
		opt242, 
		opt243, 
		opt244, 
		opt245, 
		opt246, 
		opt247, 
		opt248, 
		opt249, 
		opt250, 
		opt251, 
		opt252, 
		opt253, 
		opt254, 
		opt255, 
		opt256, 
		opt257, 
		opt258, 
		opt259, 
		opt260, 
		opt261, 
		opt262, 
		opt263, 
		opt264, 
		opt265, 
		opt266, 
		opt267, 
		opt268, 
		opt269, 
		opt270, 
		opt271, 
		opt272, 
		opt273, 
		opt274, 
		opt275, 
		opt276, 
		opt277, 
		opt278, 
		opt279, 
		opt280, 
		opt281, 
		opt282, 
		opt283, 
		opt284, 
		opt285, 
		opt286, 
		opt287, 
		opt288, 
		opt289, 
		opt290, 
		opt291, 
		opt292, 
		opt293, 
		opt294, 
		opt295, 
		opt296, 
		opt297, 
		opt298, 
		opt299, 
		opt300, 
		opt301, 
		opt302, 
		opt303, 
		opt304, 
		opt305, 
		opt306, 
		opt307, 
		opt308, 
		opt309, 
		opt310, 
		opt311, 
		opt312, 
		opt313, 
		opt314, 
		opt315, 
		opt316, 
		opt317, 
		opt318, 
		opt319, 
		opt320, 
		opt321, 
		opt322, 
		opt323, 
		opt324, 
		opt325, 
		opt326, 
		opt327, 
		opt328, 
		opt329, 
		opt330, 
		opt331, 
		opt332, 
		opt333, 
		opt334, 
		opt335, 
		opt336, 
		opt337, 
		opt338, 
		opt339, 
		opt340, 
		opt341, 
		opt342, 
		opt343, 
		opt344, 
		opt345, 
		opt346, 
		opt347, 
		opt348, 
		opt349, 
		opt350, 
		opt351, 
		opt352, 
		opt353, 
		opt354, 
		opt355, 
		opt356, 
		opt357, 
		opt358, 
		opt359, 
		opt360, 
		opt361, 
		opt362, 
		opt363, 
		opt364, 
		opt365, 
		opt366, 
		opt367, 
		opt368, 
		opt369, 
		opt370, 
		opt371, 
		opt372, 
		opt373, 
		opt374, 
		opt375, 
		opt376, 
		opt377, 
		opt378, 
		opt379, 
		opt380, 
		opt381, 
		opt382, 
		opt383, 
		opt384, 
		opt385, 
		opt386, 
		opt387, 
		opt388, 
		opt389, 
		opt390, 
		opt391, 
		opt392, 
		opt393, 
		opt394, 
		opt395, 
		opt396, 
		opt397, 
		opt398, 
		opt399, 
		opt400, 
		opt401, 
		opt402, 
		opt403, 
		opt404, 
		opt405, 
		opt406, 
		opt407, 
		opt408, 
		opt409, 
		opt410, 
		opt411, 
		opt412, 
		opt413, 
		opt414, 
		opt415, 
		opt416, 
		opt417, 
		opt418, 
		opt419, 
		opt420, 
		opt421, 
		opt422, 
		opt423, 
		opt424, 
		opt425, 
		opt426, 
		opt427, 
		opt428, 
		opt429, 
		opt430, 
		opt431, 
		opt432, 
		opt433, 
		opt434, 
		opt435, 
		opt436, 
		opt437, 
		opt438, 
		opt439, 
		opt440, 
		opt441, 
		opt442, 
		opt443, 
		opt444, 
		opt445, 
		opt446, 
		opt447, 
		opt448, 
		opt449, 
		opt450, 
		opt451, 
		opt452, 
		opt453, 
		opt454, 
		opt455, 
		opt456, 
		opt457, 
		opt458, 
		opt459, 
		opt460, 
		opt461, 
		opt462, 
		opt463, 
		opt464, 
		opt465, 
		opt466, 
		opt467, 
		opt468, 
		opt469, 
		opt470, 
		opt471, 
		opt472, 
		opt473, 
		opt474, 
		opt475, 
		opt476, 
		opt477, 
		opt478, 
		opt479, 
		opt480, 
		opt481, 
		opt482, 
		opt483, 
		opt484, 
		opt485, 
		opt486, 
		opt487, 
		opt488, 
		opt489, 
		opt490, 
		opt491, 
		opt492, 
		opt493, 
		opt494, 
		opt495, 
		opt496, 
		opt497, 
		opt498, 
		opt499, 
		opt500, 
		opt501, 
		opt502, 
		opt503, 
		opt504, 
		opt505, 
		opt506, 
		opt507, 
		opt508, 
		opt509, 
		opt510, 
		opt511, 
		opt512, 
		opt513, 
		opt514, 
		opt515, 
		opt516, 
		opt517, 
		opt518, 
		opt519, 
		opt520, 
		opt521, 
		opt522, 
		opt523, 
		opt524, 
		opt525, 
		opt526, 
		opt527, 
		opt528, 
		opt529, 
		opt530, 
		opt531, 
		opt532, 
		opt533, 
		opt534, 
		opt535, 
		opt536, 
		opt537, 
		opt538, 
		opt539, 
		opt540, 
		opt541, 
		opt542, 
		opt543, 
		opt544, 
		opt545, 
		opt546, 
		opt547, 
		opt548, 
		opt549, 
		opt550, 
		opt551, 
		opt552, 
		opt553, 
		opt554, 
		opt555, 
		opt556, 
		opt557, 
		opt558, 
		opt559, 
		opt560, 
		opt561, 
		opt562, 
		opt563, 
		opt564, 
		opt565, 
		opt566, 
		opt567, 
		opt568, 
		opt569, 
		opt570, 
		opt571, 
		opt572, 
		opt573, 
		opt574, 
		opt575, 
		opt576, 
		opt577, 
		opt578, 
		opt579, 
		opt580, 
		opt581, 
		opt582, 
		opt583, 
		opt584, 
		opt585, 
		opt586, 
		opt587, 
		opt588, 
		opt589, 
		opt590, 
		opt591, 
		opt592, 
		opt593, 
		opt594, 
		opt595, 
		opt596, 
		opt597, 
		opt598, 
		opt599, 
		opt600, 
		opt601, 
		opt602, 
		opt603, 
		opt604, 
		opt605, 
		opt606, 
		opt607, 
		opt608, 
		opt609, 
		opt610, 
		opt611, 
		opt612, 
		opt613, 
		opt614, 
		opt615, 
		opt616, 
		opt617, 
		opt618, 
		opt619, 
		opt620, 
		opt621, 
		opt622, 
		opt623, 
		opt624, 
		opt625, 
		opt626, 
		opt627, 
		opt628, 
		opt629, 
		opt630, 
		opt631, 
		opt632, 
		opt633, 
		opt634, 
		opt635, 
		opt636, 
		opt637, 
		opt638, 
		opt639, 
		opt640, 
		opt641, 
		opt642, 
		opt643, 
		opt644, 
		opt645, 
		opt646, 
		opt647, 
		opt648, 
		opt649, 
		opt650, 
		opt651, 
		opt652, 
		opt653, 
		opt654, 
		opt655, 
		opt656, 
		opt657, 
		opt658, 
		opt659, 
		opt660, 
		opt661, 
		opt662, 
		opt663, 
		opt664, 
		opt665, 
		opt666, 
		opt667, 
		opt668, 
		opt669, 
		opt670, 
		opt671, 
		opt672, 
		opt673, 
		opt674, 
		opt675, 
		opt676, 
		opt677, 
		opt678, 
		opt679, 
		opt680, 
		opt681, 
		opt682, 
		opt683, 
		opt684, 
		opt685, 
		opt686, 
		opt687, 
		opt688, 
		opt689, 
		opt690, 
		opt691, 
		opt692, 
		opt693, 
		opt694, 
		opt695, 
		opt696, 
		opt697, 
		opt698, 
		opt699, 
		opt700, 
		opt701, 
		opt702, 
		opt703, 
		opt704, 
		opt705, 
		opt706, 
		opt707, 
		opt708, 
		opt709, 
		opt710, 
		opt711, 
		opt712, 
		opt713, 
		opt714, 
		opt715, 
		opt716, 
		opt717, 
		opt718, 
		opt719, 
		opt720, 
		opt721, 
		opt722, 
		opt723, 
		opt724, 
		opt725, 
		opt726, 
		opt727, 
		opt728, 
		opt729, 
		opt730, 
		opt731, 
		opt732, 
		opt733, 
		opt734, 
		opt735, 
		opt736, 
		opt737, 
		opt738, 
		opt739, 
		opt740, 
		opt741, 
		opt742, 
		opt743, 
		opt744, 
		opt745, 
		opt746, 
		opt747, 
		opt748, 
		opt749, 
		opt750, 
		opt751, 
		opt752, 
		opt753, 
		opt754, 
		opt755, 
		opt756, 
		opt757, 
		opt758, 
		opt759, 
		opt760, 
		opt761, 
		opt762, 
		opt763, 
		opt764, 
		opt765, 
		opt766, 
		opt767, 
		opt768, 
		opt769, 
		opt770, 
		opt771, 
		opt772, 
		opt773, 
		opt774, 
		opt775, 
		opt776, 
		opt777, 
		opt778, 
		opt779, 
		opt780, 
		opt781, 
		opt782, 
		opt783, 
		opt784, 
		opt785, 
		opt786, 
		opt787, 
		opt788, 
		opt789, 
		opt790, 
		opt791, 
		opt792, 
		opt793, 
		opt794, 
		opt795, 
		opt796, 
		opt797, 
		opt798, 
		opt799, 
		opt800, 
		opt801, 
		opt802, 
		opt803, 
		opt804, 
		opt805, 
		opt806, 
		opt807, 
		opt808, 
		opt809, 
		opt810, 
		opt811, 
		opt812, 
		opt813, 
		opt814, 
		opt815, 
		opt816, 
		opt817, 
		opt818, 
		opt819, 
		opt820, 
		opt821, 
		opt822, 
		opt823, 
		opt824, 
		opt825, 
		opt826, 
		opt827, 
		opt828, 
		opt829, 
		opt830, 
		opt831, 
		opt832, 
		opt833, 
		opt834, 
		opt835, 
		opt836, 
		opt837, 
		opt838, 
		opt839, 
		opt840, 
		opt841, 
		opt842, 
		opt843, 
		opt844, 
		opt845, 
		opt846, 
		opt847, 
		opt848, 
		opt849, 
		opt850, 
		opt851, 
		opt852, 
		opt853, 
		opt854, 
		opt855, 
		opt856, 
		opt857, 
		opt858, 
		opt859, 
		opt860, 
		opt861, 
		opt862, 
		opt863, 
		opt864, 
		opt865, 
		opt866, 
		opt867, 
		opt868, 
		opt869, 
		opt870, 
		opt871, 
		opt872, 
		opt873, 
		opt874, 
		opt875, 
		opt876, 
		opt877, 
		opt878, 
		opt879, 
		opt880, 
		opt881, 
		opt882, 
		opt883, 
		opt884, 
		opt885, 
		opt886, 
		opt887, 
		opt888, 
		opt889, 
		opt890, 
		opt891, 
		opt892, 
		opt893, 
		opt894, 
		opt895, 
		opt896, 
		opt897, 
		opt898, 
		opt899, 
		opt900, 
		opt901, 
		opt902, 
		opt903, 
		opt904,
		opt905,
		opt906,
		opt907,
		opt908,
		opt909,
		opt910,
		opt911,
		opt912,
		opt913,
		opt914,
		opt915,
		opt916,
		opt917,
		opt918,
		opt919,
		opt920,
		opt921,
		opt922,
		opt923,
		opt924,
		opt925,
		opt926,
		opt927,
		opt928,
		opt929
	};
	
	int resolveOption(string commentarg){
		std::map<string, int>optionStrings;
        std::map<string, int>::iterator itr;
			optionStrings["Option_invalid"] = opt1;
			optionStrings["assert"] = opt2;
			optionStrings["isalpha"] = opt3;
			optionStrings["isblank"] = opt4;
			optionStrings["iscntrl"] = opt5;
			optionStrings["isdigit"] = opt6;
			optionStrings["isgraph"] = opt7;
			optionStrings["islower"] = opt8;
			optionStrings["isprint"] = opt9;
			optionStrings["ispunct"] = opt10;
			optionStrings["isspace"] = opt11;
			optionStrings["isupper"] = opt12;
			optionStrings["isxdigit"] = opt13;
			optionStrings["tolower"] = opt14;
			optionStrings["toupper"] = opt15;
			optionStrings["errno"] = opt16;
			optionStrings["feclearexcept"] = opt17;
			optionStrings["feraiseexcept"] = opt18;
			optionStrings["fegetexceptflag"] = opt19;
			optionStrings["fesetexceptflag"] = opt20;
			optionStrings["fegetround"] = opt21;
			optionStrings["fesetround"] = opt22;
			optionStrings["fegetenv"] = opt23;
			optionStrings["fesetenv"] = opt24;
			optionStrings["feholdexcept"] = opt25;
			optionStrings["feupdateenv"] = opt26;
			optionStrings["fetestexcept"] = opt27;
			optionStrings["fenv_t"] = opt28;
			optionStrings["fexcept_t"] = opt29;
			optionStrings["FE_DIVBYZERO"] = opt30;
			optionStrings["FE_INEXACT"] = opt31;
			optionStrings["FE_INVALID"] = opt32;
			optionStrings["FE_OVERFLOW"] = opt33;
			optionStrings["FE_UNDERFLOW"] = opt34;
			optionStrings["FE_ALL_EXCEPT"] = opt35;
			optionStrings["FE_DOWNWARD"] = opt36;
			optionStrings["FE_TONEAREST"] = opt37;
			optionStrings["FE_TOWARDZERO"] = opt38;
			optionStrings["FE_UPWARD"] = opt39;
			optionStrings["FE_DFL_ENV"] = opt40;
			optionStrings["FENV_ACCESS"] = opt41;
			optionStrings["<climits>"] = opt42;
			optionStrings["<cfloat>"] = opt43;
			optionStrings["structlconv"] = opt44;
			optionStrings["setlocale"] = opt45;
			optionStrings["localeconv"] = opt46;
			optionStrings["cos"] = opt47;
			optionStrings["sin"] = opt48;
			optionStrings["tan"] = opt49;
			optionStrings["acos"] = opt50;
			optionStrings["asin"] = opt51;
			optionStrings["atan"] = opt52;
			optionStrings["atan2"] = opt53;
			optionStrings["cosh"] = opt54;
			optionStrings["sinh"] = opt55;
			optionStrings["tanh"] = opt56;
			optionStrings["acosh"] = opt57;
			optionStrings["asinh"] = opt58;
			optionStrings["atanh"] = opt59;
			optionStrings["exp"] = opt60;
			optionStrings["frexp"] = opt61;
			optionStrings["ldexp"] = opt62;
			optionStrings["log"] = opt63;
			optionStrings["log10"] = opt64;
			optionStrings["modf"] = opt65;
			optionStrings["exp2"] = opt66;
			optionStrings["expm1"] = opt67;
			optionStrings["ilogb"] = opt68;
			optionStrings["log1p"] = opt69;
			optionStrings["log2"] = opt70;
			optionStrings["logb"] = opt71;
			optionStrings["scalbn"] = opt72;
			optionStrings["scalbln"] = opt73;
			optionStrings["pow"] = opt74;
			optionStrings["sqrt"] = opt75;
			optionStrings["cbrt"] = opt76;
			optionStrings["hypot"] = opt77;
			optionStrings["erf"] = opt78;
			optionStrings["erfc"] = opt79;
			optionStrings["tgamma"] = opt80;
			optionStrings["lgamma"] = opt81;
			optionStrings["ceil"] = opt82;
			optionStrings["floor"] = opt83;
			optionStrings["fmod"] = opt84;
			optionStrings["trunc"] = opt85;
			optionStrings["round"] = opt86;
			optionStrings["lround"] = opt87;
			optionStrings["llround"] = opt88;
			optionStrings["rint"] = opt89;
			optionStrings["lrint"] = opt90;
			optionStrings["llrint"] = opt91;
			optionStrings["nearbyint"] = opt92;
			optionStrings["remainder"] = opt93;
			optionStrings["remquo"] = opt94;
			optionStrings["copysign"] = opt95;
			optionStrings["nan"] = opt96;
			optionStrings["nextafter"] = opt97;
			optionStrings["nexttoward"] = opt98;
			optionStrings["fdim"] = opt99;
			optionStrings["fmax"] = opt100;
			optionStrings["fmin"] = opt101;
			optionStrings["fabs"] = opt102;
			optionStrings["abs"] = opt103;
			optionStrings["fma"] = opt104;
			optionStrings["fpclassify"] = opt105;
			optionStrings["isfinite"] = opt106;
			optionStrings["isinf"] = opt107;
			optionStrings["isnan"] = opt108;
			optionStrings["isnormal"] = opt109;
			optionStrings["signbit"] = opt110;
			optionStrings["isgreater"] = opt111;
			optionStrings["isgreaterequal"] = opt112;
			optionStrings["isless"] = opt113;
			optionStrings["islessequal"] = opt114;
			optionStrings["islessgreater"] = opt115;
			optionStrings["isunordered"] = opt116;
			optionStrings["math_errhandling"] = opt117;
			optionStrings["INFINITY"] = opt118;
			optionStrings["NAN"] = opt119;
			optionStrings["HUGE_VAL"] = opt120;
			optionStrings["HUGE_VALF"] = opt121;
			optionStrings["HUGE_VALL"] = opt122;
			optionStrings["double_t"] = opt123;
			optionStrings["float_t"] = opt124;
			optionStrings["longjmp"] = opt125;
			optionStrings["setjmp"] = opt126;
			optionStrings["jmp_buf"] = opt127;
			optionStrings["signal"] = opt128;
			optionStrings["raise"] = opt129;
			optionStrings["sig_atomic_t"] = opt130;
			optionStrings["va_list"] = opt131;
			optionStrings["va_start"] = opt132;
			optionStrings["va_arg"] = opt133;
			optionStrings["va_end"] = opt134;
			optionStrings["va_copy"] = opt135;
			optionStrings["ptrdiff_t"] = opt136;
			optionStrings["size_t"] = opt137;
			optionStrings["max_align_t"] = opt138;
			optionStrings["nullptr_t"] = opt139;
			optionStrings["offsetof"] = opt140;
			optionStrings["NULL"] = opt141;
			optionStrings["remove"] = opt142;
			optionStrings["rename"] = opt143;
			optionStrings["tmpfile"] = opt144;
			optionStrings["tmpnam"] = opt145;
			optionStrings["fclose"] = opt146;
			optionStrings["fflush"] = opt147;
			optionStrings["fopen"] = opt148;
			optionStrings["freopen"] = opt149;
			optionStrings["setbuf"] = opt150;
			optionStrings["setvbuf"] = opt151;
			optionStrings["fprintf"] = opt152;
			optionStrings["fscanf"] = opt153;
			optionStrings["printf"] = opt154;
			optionStrings["scanf"] = opt155;
			optionStrings["snprintf"] = opt156;
			optionStrings["sprintf"] = opt157;
			optionStrings["sscanf"] = opt158;
			optionStrings["vfprintf"] = opt159;
			optionStrings["vfscanf"] = opt160;
			optionStrings["vprintf"] = opt161;
			optionStrings["vscanf"] = opt162;
			optionStrings["vsnprintf"] = opt163;
			optionStrings["vsprintf"] = opt164;
			optionStrings["vsscanf"] = opt165;
			optionStrings["fgetc"] = opt166;
			optionStrings["fgets"] = opt167;
			optionStrings["fputc"] = opt168;
			optionStrings["fputs"] = opt169;
			optionStrings["getc"] = opt170;
			optionStrings["getchar"] = opt171;
			optionStrings["gets"] = opt172;
			optionStrings["putc"] = opt173;
			optionStrings["putchar"] = opt174;
			optionStrings["puts"] = opt175;
			optionStrings["ungetc"] = opt176;
			optionStrings["fread"] = opt177;
			optionStrings["fwrite"] = opt178;
			optionStrings["fgetpos"] = opt179;
			optionStrings["fseek"] = opt180;
			optionStrings["fsetpos"] = opt181;
			optionStrings["ftell"] = opt182;
			optionStrings["rewind"] = opt183;
			optionStrings["clearerr"] = opt184;
			optionStrings["feof"] = opt185;
			optionStrings["ferror"] = opt186;
			optionStrings["perror"] = opt187;
			optionStrings["BUFSIZ"] = opt188;
			optionStrings["EOF"] = opt189;
			optionStrings["FILENAME_MAX"] = opt190;
			optionStrings["FOPEN_MAX"] = opt191;
			optionStrings["L_tmpnam"] = opt192;
			optionStrings["TMP_MAX"] = opt193;
			optionStrings["FILE"] = opt194;
			optionStrings["fpos_t"] = opt195;
			optionStrings["atof"] = opt196;
			optionStrings["atoi"] = opt197;
			optionStrings["atol"] = opt198;
			optionStrings["atoll"] = opt199;
			optionStrings["strtod"] = opt200;
			optionStrings["strtof"] = opt201;
			optionStrings["strtol"] = opt202;
			optionStrings["strtold"] = opt203;
			optionStrings["strtoll"] = opt204;
			optionStrings["strtoul"] = opt205;
			optionStrings["strtoull"] = opt206;
			optionStrings["rand"] = opt207;
			optionStrings["srand"] = opt208;
			optionStrings["calloc"] = opt209;
			optionStrings["free"] = opt210;
			optionStrings["malloc"] = opt211;
			optionStrings["realloc"] = opt212;
			optionStrings["abort"] = opt213;
			optionStrings["atexit"] = opt214;
			optionStrings["at_quick_exit"] = opt215;
			optionStrings["exit"] = opt216;
			optionStrings["getenv"] = opt217;
			optionStrings["quick_exit"] = opt218;
			optionStrings["system"] = opt219;
			optionStrings["_Exit"] = opt220;
			optionStrings["bsearch"] = opt221;
			optionStrings["qsort"] = opt222;
			optionStrings["div"] = opt223;
			optionStrings["labs"] = opt224;
			optionStrings["ldiv"] = opt225;
			optionStrings["llabs"] = opt226;
			optionStrings["lldiv"] = opt227;
			optionStrings["mblen"] = opt228;
			optionStrings["mbtowc"] = opt229;
			optionStrings["wctomb"] = opt230;
			optionStrings["mbstowcs"] = opt231;
			optionStrings["wcstombs"] = opt232;
			optionStrings["EXIT_FAILURE"] = opt233;
			optionStrings["EXIT_SUCCESS"] = opt234;
			optionStrings["MB_CUR_MAX"] = opt235;
			optionStrings["RAND_MAX"] = opt236;
			optionStrings["div_t"] = opt237;
			optionStrings["ldiv_t"] = opt238;
			optionStrings["lldiv_t"] = opt239;
			optionStrings["memcpy"] = opt240;
			optionStrings["memmove"] = opt241;
			optionStrings["strcpy"] = opt242;
			optionStrings["strncpy"] = opt243;
			optionStrings["strcat"] = opt244;
			optionStrings["strncat"] = opt245;
			optionStrings["memcmp"] = opt246;
			optionStrings["strcmp"] = opt247;
			optionStrings["strcoll"] = opt248;
			optionStrings["strncmp"] = opt249;
			optionStrings["strxfrm"] = opt250;
			optionStrings["memchr"] = opt251;
			optionStrings["strchr"] = opt252;
			optionStrings["strcspn"] = opt253;
			optionStrings["strpbrk"] = opt254;
			optionStrings["strrchr"] = opt255;
			optionStrings["strspn"] = opt256;
			optionStrings["strstr"] = opt257;
			optionStrings["strtok"] = opt258;
			optionStrings["memset"] = opt259;
			optionStrings["strerror"] = opt260;
			optionStrings["strlen"] = opt261;
			optionStrings["clock"] = opt262;
			optionStrings["difftime"] = opt263;
			optionStrings["mktime"] = opt264;
			optionStrings["time"] = opt265;
			optionStrings["asctime"] = opt266;
			optionStrings["ctime"] = opt267;
			optionStrings["gmtime"] = opt268;
			optionStrings["localtime"] = opt269;
			optionStrings["strftime"] = opt270;
			optionStrings["CLOCKS_PER_SEC"] = opt271;
			optionStrings["clock_t"] = opt272;
			optionStrings["time_t"] = opt273;
			optionStrings["structtm"] = opt274;
			optionStrings["c16rtomb"] = opt275;
			optionStrings["c32rtomb"] = opt276;
			optionStrings["mbrtoc16"] = opt277;
			optionStrings["mbrtoc32"] = opt278;
			optionStrings["fgetwc"] = opt279;
			optionStrings["fgetws"] = opt280;
			optionStrings["fputwc"] = opt281;
			optionStrings["fputws"] = opt282;
			optionStrings["fwide"] = opt283;
			optionStrings["fwprintf"] = opt284;
			optionStrings["fwscanf"] = opt285;
			optionStrings["getwc"] = opt286;
			optionStrings["getwchar"] = opt287;
			optionStrings["putwc"] = opt288;
			optionStrings["putwchar"] = opt289;
			optionStrings["swprintf"] = opt290;
			optionStrings["swscanf"] = opt291;
			optionStrings["ungetwc"] = opt292;
			optionStrings["vfwprintf"] = opt293;
			optionStrings["vfwscanf"] = opt294;
			optionStrings["vswprintf"] = opt295;
			optionStrings["vswscanf"] = opt296;
			optionStrings["vwprintf"] = opt297;
			optionStrings["vwscanf"] = opt298;
			optionStrings["wprintf"] = opt299;
			optionStrings["wscanf"] = opt300;
			optionStrings["wcstod"] = opt301;
			optionStrings["wcstof"] = opt302;
			optionStrings["wcstol"] = opt303;
			optionStrings["wcstold"] = opt304;
			optionStrings["wcstoll"] = opt305;
			optionStrings["wcstoul"] = opt306;
			optionStrings["wcstoull"] = opt307;
			optionStrings["btowc"] = opt308;
			optionStrings["mbrlen"] = opt309;
			optionStrings["mbrtowc"] = opt310;
			optionStrings["mbsinit"] = opt311;
			optionStrings["mbsrtowcs"] = opt312;
			optionStrings["wcrtomb"] = opt313;
			optionStrings["wctob"] = opt314;
			optionStrings["wcsrtombs"] = opt315;
			optionStrings["wcscat"] = opt316;
			optionStrings["wcschr"] = opt317;
			optionStrings["wcscmp"] = opt318;
			optionStrings["wcscoll"] = opt319;
			optionStrings["wcscpy"] = opt320;
			optionStrings["wcscspn"] = opt321;
			optionStrings["wcslen"] = opt322;
			optionStrings["wcsncat"] = opt323;
			optionStrings["wcsncmp"] = opt324;
			optionStrings["wcsncpy"] = opt325;
			optionStrings["wcspbrk"] = opt326;
			optionStrings["wcsrchr"] = opt327;
			optionStrings["wcsspn"] = opt328;
			optionStrings["wcsstr"] = opt329;
			optionStrings["wcstok"] = opt330;
			optionStrings["wcsxfrm"] = opt331;
			optionStrings["wmemchr"] = opt332;
			optionStrings["wmemcmp"] = opt333;
			optionStrings["wmemcpy"] = opt334;
			optionStrings["wmemmove"] = opt335;
			optionStrings["wmemset"] = opt336;
			optionStrings["wcsftime"] = opt337;
			optionStrings["mbstate_t"] = opt338;
			optionStrings["wchar_t"] = opt339;
			optionStrings["wint_t"] = opt340;
			optionStrings["WCHAR_MAX"] = opt341;
			optionStrings["WCHAR_MIN"] = opt342;
			optionStrings["WEOF"] = opt343;
			optionStrings["iswalnum"] = opt344;
			optionStrings["iswalpha"] = opt345;
			optionStrings["iswblank"] = opt346;
			optionStrings["iswcntrl"] = opt347;
			optionStrings["iswdigit"] = opt348;
			optionStrings["iswgraph"] = opt349;
			optionStrings["iswlower"] = opt350;
			optionStrings["iswprint"] = opt351;
			optionStrings["iswpunct"] = opt352;
			optionStrings["iswspace"] = opt353;
			optionStrings["iswupper"] = opt354;
			optionStrings["iswxdigit"] = opt355;
			optionStrings["towlower"] = opt356;
			optionStrings["towupper"] = opt357;
			optionStrings["iswctype"] = opt358;
			optionStrings["towctrans"] = opt359;
			optionStrings["wctrans"] = opt360;
			optionStrings["wctype"] = opt361;
			optionStrings["wctrans_t"] = opt362;
			optionStrings["wctype_t"] = opt363;
			optionStrings["array"] = opt364;
			optionStrings["end"] = opt365;
			optionStrings["bitset"] = opt366;
			optionStrings["deque"] = opt367;
			optionStrings["forward_list"] = opt368;
			optionStrings["list"] = opt369;
			optionStrings["map"] = opt370;
			optionStrings["multimap"] = opt371;
			optionStrings["queue"] = opt372;
			optionStrings["priority_queue"] = opt373;
			optionStrings["set"] = opt374;
			optionStrings["multiset"] = opt375;
			optionStrings["stack"] = opt376;
			optionStrings["unordered_map"] = opt377;
			optionStrings["unordered_multimap"] = opt378;
			optionStrings["unordered_set"] = opt379;
			optionStrings["unordered_multiset"] = opt380;
			optionStrings["vector"] = opt381;
			optionStrings["vector<;bool>;"] = opt382;
			optionStrings["atomic"] = opt383;
			optionStrings["atomic_flag"] = opt384;
			optionStrings["memory_order"] = opt385;
			optionStrings["kill_dependency"] = opt386;
			optionStrings["atomic_thread_fence"] = opt387;
			optionStrings["atomic_signal_fence"] = opt388;
			optionStrings["atomic_is_lock_free"] = opt389;
			optionStrings["atomic_init"] = opt390;
			optionStrings["atomic_store"] = opt391;
			optionStrings["atomic_store_explicit"] = opt392;
			optionStrings["atomic_load"] = opt393;
			optionStrings["atomic_load_explicit"] = opt394;
			optionStrings["atomic_exchange"] = opt395;
			optionStrings["atomic_exchange_explicit"] = opt396;
			optionStrings["atomic_compare_exchange_weak"] = opt397;
			optionStrings["atomic_compare_exchange_weak_explicit"] = opt398;
			optionStrings["atomic_compare_exchange_strong"] = opt399;
			optionStrings["atomic_compare_exchange_strong_explicit"] = opt400;
			optionStrings["atomic_fetch_add"] = opt401;
			optionStrings["atomic_fetch_add_explicit"] = opt402;
			optionStrings["atomic_fetch_sub"] = opt403;
			optionStrings["atomic_fetch_sub_explicit"] = opt404;
			optionStrings["atomic_fetch_and"] = opt405;
			optionStrings["atomic_fetch_and_explicit"] = opt406;
			optionStrings["atomic_fetch_or"] = opt407;
			optionStrings["atomic_fetch_or_explicit"] = opt408;
			optionStrings["atomic_fetch_xor"] = opt409;
			optionStrings["atomic_fetch_xor_explicit"] = opt410;
			optionStrings["atomic_flag_test_and_set"] = opt411;
			optionStrings["atomic_flag_test_and_set_explicit"] = opt412;
			optionStrings["atomic_flag_clear"] = opt413;
			optionStrings["atomic_flag_clear_explicit"] = opt414;
			optionStrings["ATOMIC_VAR_INIT"] = opt415;
			optionStrings["ATOMIC_FLAG_INIT"] = opt416;
			optionStrings["condition_variable"] = opt417;
			optionStrings["condition_variable_any"] = opt418;
			optionStrings["cv_status"] = opt419;
			optionStrings["notify_all_at_thread_exit"] = opt420;
			optionStrings["promise"] = opt421;
			optionStrings["packaged_task"] = opt422;
			optionStrings["future"] = opt423;
			optionStrings["shared_future"] = opt424;
			optionStrings["future_error"] = opt425;
			optionStrings["future_errc"] = opt426;
			optionStrings["future_status"] = opt427;
			optionStrings["launch"] = opt428;
			optionStrings["async"] = opt429;
			optionStrings["future_category"] = opt430;
			optionStrings["mutex"] = opt431;
			optionStrings["recursive_mutex"] = opt432;
			optionStrings["timed_mutex"] = opt433;
			optionStrings["recursive_timed_mutex"] = opt434;
			optionStrings["lock_guard"] = opt435;
			optionStrings["unique_lock"] = opt436;
			optionStrings["once_flag"] = opt437;
			optionStrings["adopt_lock_t"] = opt438;
			optionStrings["defer_lock_t"] = opt439;
			optionStrings["try_to_lock_t"] = opt440;
			optionStrings["try_lock"] = opt441;
			optionStrings["lock"] = opt442;
			optionStrings["call_once"] = opt443;
			optionStrings["thread"] = opt444;
			optionStrings["this_thread"] = opt445;
			optionStrings["all_of"] = opt446;
			optionStrings["any_of"] = opt447;
			optionStrings["none_of"] = opt448;
			optionStrings["for_each"] = opt449;
			optionStrings["find"] = opt450;
			optionStrings["find_if"] = opt451;
			optionStrings["find_if_not"] = opt452;
			optionStrings["find_end"] = opt453;
			optionStrings["find_first_of"] = opt454;
			optionStrings["adjacent_find"] = opt455;
			optionStrings["count"] = opt456;
			optionStrings["count_if"] = opt457;
			optionStrings["mismatch"] = opt458;
			optionStrings["equal"] = opt459;
			optionStrings["is_permutation"] = opt460;
			optionStrings["search"] = opt461;
			optionStrings["search_n"] = opt462;
			optionStrings["copy"] = opt463;
			optionStrings["copy_n"] = opt464;
			optionStrings["copy_if"] = opt465;
			optionStrings["copy_backward"] = opt466;
			optionStrings["move"] = opt467;
			optionStrings["move_backward"] = opt468;
			optionStrings["swap"] = opt469;
			optionStrings["swap_ranges"] = opt470;
			optionStrings["iter_swap"] = opt471;
			optionStrings["transform"] = opt472;
			optionStrings["replace"] = opt473;
			optionStrings["replace_if"] = opt474;
			optionStrings["replace_copy"] = opt475;
			optionStrings["replace_copy_if"] = opt476;
			optionStrings["fill"] = opt477;
			optionStrings["fill_n"] = opt478;
			optionStrings["generate"] = opt479;
			optionStrings["generate_n"] = opt480;
			optionStrings["remove_if"] = opt481;
			optionStrings["remove_copy"] = opt482;
			optionStrings["remove_copy_if"] = opt483;
			optionStrings["unique"] = opt484;
			optionStrings["unique_copy"] = opt485;
			optionStrings["reverse"] = opt486;
			optionStrings["reverse_copy"] = opt487;
			optionStrings["rotate"] = opt488;
			optionStrings["rotate_copy"] = opt489;
			optionStrings["random_shuffle"] = opt490;
			optionStrings["shuffle"] = opt491;
			optionStrings["is_partitioned"] = opt492;
			optionStrings["partition"] = opt493;
			optionStrings["stable_partition"] = opt494;
			optionStrings["partition_copy"] = opt495;
			optionStrings["partition_point"] = opt496;
			optionStrings["sort"] = opt497;
			optionStrings["stable_sort"] = opt498;
			optionStrings["partial_sort"] = opt499;
			optionStrings["partial_sort_copy"] = opt500;
			optionStrings["is_sorted"] = opt501;
			optionStrings["is_sorted_until"] = opt502;
			optionStrings["nth_element"] = opt503;
			optionStrings["lower_bound"] = opt504;
			optionStrings["upper_bound"] = opt505;
			optionStrings["equal_range"] = opt506;
			optionStrings["binary_search"] = opt507;
			optionStrings["merge"] = opt508;
			optionStrings["inplace_merge"] = opt509;
			optionStrings["includes"] = opt510;
			optionStrings["set_union"] = opt511;
			optionStrings["set_intersection"] = opt512;
			optionStrings["set_difference"] = opt513;
			optionStrings["set_symmetric_difference"] = opt514;
			optionStrings["push_heap"] = opt515;
			optionStrings["pop_heap"] = opt516;
			optionStrings["make_heap"] = opt517;
			optionStrings["sort_heap"] = opt518;
			optionStrings["is_heap"] = opt519;
			optionStrings["is_heap_until"] = opt520;
			optionStrings["min"] = opt521;
			optionStrings["max"] = opt522;
			optionStrings["minmax"] = opt523;
			optionStrings["min_element"] = opt524;
			optionStrings["max_element"] = opt525;
			optionStrings["minmax_element"] = opt526;
			optionStrings["lexicographical_compare"] = opt527;
			optionStrings["next_permutation"] = opt528;
			optionStrings["prev_permutation"] = opt529;
			optionStrings["duration"] = opt530;
			optionStrings["time_point"] = opt531;
			optionStrings["system_clock"] = opt532;
			optionStrings["steady_clock"] = opt533;
			optionStrings["high_resolution_clock"] = opt534;
			optionStrings["treat_as_floating_point"] = opt535;
			optionStrings["duration_values"] = opt536;
			optionStrings["common_type(duration)***"] = opt537;
			optionStrings["duration_cast"] = opt538;
			optionStrings["time_point_cast"] = opt539;
			optionStrings["hours"] = opt540;
			optionStrings["minutes"] = opt541;
			optionStrings["seconds"] = opt542;
			optionStrings["milliseconds"] = opt543;
			optionStrings["microseconds"] = opt544;
			optionStrings["nanoseconds"] = opt545;
			optionStrings["codecvt_mode"] = opt546;
			optionStrings["codecvt_utf8"] = opt547;
			optionStrings["codecvt_utf16"] = opt548;
			optionStrings["codecvt_utf8_utf16"] = opt549;
			optionStrings["complex"] = opt550;
			optionStrings["real"] = opt551;
			optionStrings["imag"] = opt552;
			optionStrings["arg"] = opt553;
			optionStrings["norm"] = opt554;
			optionStrings["conj"] = opt555;
			optionStrings["polar"] = opt556;
			optionStrings["proj"] = opt557;
			optionStrings["complexoperators"] = opt558;
			optionStrings["exception"] = opt559;
			optionStrings["bad_exception"] = opt560;
			optionStrings["nested_exception"] = opt561;
			optionStrings["exception_ptr"] = opt562;
			optionStrings["terminate_handler"] = opt563;
			optionStrings["unexpected_handler"] = opt564;
			optionStrings["terminate"] = opt565;
			optionStrings["get_terminate"] = opt566;
			optionStrings["set_terminate"] = opt567;
			optionStrings["unexpected"] = opt568;
			optionStrings["get_unexpected"] = opt569;
			optionStrings["set_unexpected"] = opt570;
			optionStrings["uncaught_exception"] = opt571;
			optionStrings["current_exception"] = opt572;
			optionStrings["rethrow_exception"] = opt573;
			optionStrings["make_exception_ptr"] = opt574;
			optionStrings["throw_with_nested"] = opt575;
			optionStrings["rethrow_if_nested"] = opt576;
			optionStrings["unary_function"] = opt577;
			optionStrings["binary_function"] = opt578;
			optionStrings["initializer_list"] = opt579;
			optionStrings["advance"] = opt580;
			optionStrings["distance"] = opt581;
			optionStrings["prev"] = opt582;
			optionStrings["next"] = opt583;
			optionStrings["back_inserter"] = opt584;
			optionStrings["front_inserter"] = opt585;
			optionStrings["inserter"] = opt586;
			optionStrings["make_move_iterator"] = opt587;
			optionStrings["iterator"] = opt588;
			optionStrings["iterator_traits"] = opt589;
			optionStrings["reverse_iterator"] = opt590;
			optionStrings["move_iterator"] = opt591;
			optionStrings["back_insert_iterator"] = opt592;
			optionStrings["front_insert_iterator"] = opt593;
			optionStrings["insert_iterator"] = opt594;
			optionStrings["istream_iterator"] = opt595;
			optionStrings["ostream_iterator"] = opt596;
			optionStrings["istreambuf_iterator"] = opt597;
			optionStrings["ostreambuf_iterator"] = opt598;
			optionStrings["input_iterator_tag"] = opt599;
			optionStrings["output_iterator_tag"] = opt600;
			optionStrings["forward_iterator_tag"] = opt601;
			optionStrings["bidirectional_iterator_tag"] = opt602;
			optionStrings["random_access_iterator_tag"] = opt603;
			optionStrings["numeric_limits"] = opt604;
			optionStrings["float_round_style"] = opt605;
			optionStrings["float_denorm_style"] = opt606;
			optionStrings["use_facet"] = opt607;
			optionStrings["has_facet"] = opt608;
			optionStrings["isalnum"] = opt609;
			optionStrings["locale"] = opt610;
			optionStrings["ctype"] = opt611;
			optionStrings["ctype_byname"] = opt612;
			optionStrings["codecvt"] = opt613;
			optionStrings["codecvt_byname"] = opt614;
			optionStrings["num_get"] = opt615;
			optionStrings["num_put"] = opt616;
			optionStrings["numpunct"] = opt617;
			optionStrings["numpunct_byname"] = opt618;
			optionStrings["collate"] = opt619;
			optionStrings["collate_byname"] = opt620;
			optionStrings["time_get"] = opt621;
			optionStrings["time_get_byname"] = opt622;
			optionStrings["time_put"] = opt623;
			optionStrings["time_put_byname"] = opt624;
			optionStrings["money_get"] = opt625;
			optionStrings["money_put"] = opt626;
			optionStrings["moneypunct"] = opt627;
			optionStrings["moneypunct_byname"] = opt628;
			optionStrings["messages"] = opt629;
			optionStrings["messages_byname"] = opt630;
			optionStrings["ctype_base"] = opt631;
			optionStrings["codecvt_base"] = opt632;
			optionStrings["time_base"] = opt633;
			optionStrings["money_base"] = opt634;
			optionStrings["allocator"] = opt635;
			optionStrings["allocator_arg"] = opt636;
			optionStrings["allocator_arg_t"] = opt637;
			optionStrings["allocator_traits"] = opt638;
			optionStrings["auto_ptr"] = opt639;
			optionStrings["auto_ptr_ref"] = opt640;
			optionStrings["shared_ptr"] = opt641;
			optionStrings["weak_ptr"] = opt642;
			optionStrings["unique_ptr"] = opt643;
			optionStrings["default_delete"] = opt644;
			optionStrings["make_shared"] = opt645;
			optionStrings["allocate_shared"] = opt646;
			optionStrings["static_pointer_cast"] = opt647;
			optionStrings["dynamic_pointer_cast"] = opt648;
			optionStrings["const_pointer_cast"] = opt649;
			optionStrings["get_deleter"] = opt650;
			optionStrings["owner_less"] = opt651;
			optionStrings["enable_shared_from_this"] = opt652;
			optionStrings["raw_storage_iterator"] = opt653;
			optionStrings["get_temporary_buffer"] = opt654;
			optionStrings["return_temporary_buffer"] = opt655;
			optionStrings["uninitialized_copy"] = opt656;
			optionStrings["uninitialized_copy_n"] = opt657;
			optionStrings["uninitialized_fill"] = opt658;
			optionStrings["uninitialized_fill_n"] = opt659;
			optionStrings["pointer_traits"] = opt660;
			optionStrings["pointer_safety"] = opt661;
			optionStrings["declare_reachable"] = opt662;
			optionStrings["undeclare_reachable"] = opt663;
			optionStrings["declare_no_pointers"] = opt664;
			optionStrings["undeclare_no_pointers"] = opt665;
			optionStrings["get_pointer_safety"] = opt666;
			optionStrings["align"] = opt667;
			optionStrings["addressof"] = opt668;
			optionStrings["operatornew"] = opt669;
			optionStrings["operatornew[]"] = opt670;
			optionStrings["operatordelete"] = opt671;
			optionStrings["operatordelete[]"] = opt672;
			optionStrings["set_new_handler"] = opt673;
			optionStrings["get_new_handler"] = opt674;
			optionStrings["nothrow_t"] = opt675;
			optionStrings["new_handler"] = opt676;
			optionStrings["bad_alloc"] = opt677;
			optionStrings["bad_array_new_length"] = opt678;
			optionStrings["nothrow"] = opt679;
			optionStrings["accumulate"] = opt680;
			optionStrings["adjacent_difference"] = opt681;
			optionStrings["inner_product"] = opt682;
			optionStrings["partial_sum"] = opt683;
			optionStrings["iota"] = opt684;
			optionStrings["linear_congruential_engine"] = opt685;
			optionStrings["mersenne_twister_engine"] = opt686;
			optionStrings["subtract_with_carry_engine"] = opt687;
			optionStrings["discard_block_engine"] = opt688;
			optionStrings["independent_bits_engine"] = opt689;
			optionStrings["shuffle_order_engine"] = opt690;
			optionStrings["default_random_engine"] = opt691;
			optionStrings["minstd_rand"] = opt692;
			optionStrings["minstd_rand0"] = opt693;
			optionStrings["mt19937"] = opt694;
			optionStrings["mt19937_64"] = opt695;
			optionStrings["ranlux24_base"] = opt696;
			optionStrings["ranlux48_base"] = opt697;
			optionStrings["ranlux24"] = opt698;
			optionStrings["ranlux48"] = opt699;
			optionStrings["knuth_b"] = opt700;
			optionStrings["random_device"] = opt701;
			optionStrings["uniform_int_distribution"] = opt702;
			optionStrings["uniform_real_distribution"] = opt703;
			optionStrings["bernoulli_distribution"] = opt704;
			optionStrings["binomial_distribution"] = opt705;
			optionStrings["geometric_distribution"] = opt706;
			optionStrings["negative_binomial_distribution"] = opt707;
			optionStrings["poisson_distribution"] = opt708;
			optionStrings["exponential_distribution"] = opt709;
			optionStrings["gamma_distribution"] = opt710;
			optionStrings["weibull_distribution"] = opt711;
			optionStrings["extreme_value_distribution"] = opt712;
			optionStrings["normal_distribution"] = opt713;
			optionStrings["lognormal_distribution"] = opt714;
			optionStrings["chi_squared_distribution"] = opt715;
			optionStrings["cauchy_distribution"] = opt716;
			optionStrings["fisher_f_distribution"] = opt717;
			optionStrings["student_t_distribution"] = opt718;
			optionStrings["discrete_distribution"] = opt719;
			optionStrings["piecewise_constant_distribution"] = opt720;
			optionStrings["piecewise_linear_distribution"] = opt721;
			optionStrings["seed_seq"] = opt722;
			optionStrings["generate_canonical"] = opt723;
			optionStrings["ratio"] = opt724;
			optionStrings["ratio_add"] = opt725;
			optionStrings["ratio_subtract"] = opt726;
			optionStrings["ratio_multiply"] = opt727;
			optionStrings["ratio_divide"] = opt728;
			optionStrings["ratio_equal"] = opt729;
			optionStrings["ratio_not_equal"] = opt730;
			optionStrings["ratio_less"] = opt731;
			optionStrings["ratio_less_equal"] = opt732;
			optionStrings["ratio_greater"] = opt733;
			optionStrings["ratio_greater_equal"] = opt734;
			optionStrings["regex_match"] = opt735;
			optionStrings["regex_search"] = opt736;
			optionStrings["regex_replace"] = opt737;
			optionStrings["regex_iterator"] = opt738;
			optionStrings["regex_token_iterator"] = opt739;
			optionStrings["basic_regex"] = opt740;
			optionStrings["match_results"] = opt741;
			optionStrings["sub_match"] = opt742;
			optionStrings["regex_traits"] = opt743;
			optionStrings["regex_error"] = opt744;
			optionStrings["regex"] = opt745;
			optionStrings["wregex"] = opt746;
			optionStrings["cmatch"] = opt747;
			optionStrings["wcmatch"] = opt748;
			optionStrings["smatch"] = opt749;
			optionStrings["wsmatch"] = opt750;
			optionStrings["csub_match"] = opt751;
			optionStrings["wcsub_match"] = opt752;
			optionStrings["ssub_match"] = opt753;
			optionStrings["wssub_match"] = opt754;
			optionStrings["regex_constants"] = opt755;
			optionStrings["ECMAScriptsyntax"] = opt756;
			optionStrings["begin"] = opt757;
			optionStrings["logic_error"] = opt758;
			optionStrings["domain_error"] = opt759;
			optionStrings["invalid_argument"] = opt760;
			optionStrings["length_error"] = opt761;
			optionStrings["out_of_range"] = opt762;
			optionStrings["runtime_error"] = opt763;
			optionStrings["range_error"] = opt764;
			optionStrings["overflow_error"] = opt765;
			optionStrings["underflow_error"] = opt766;
			optionStrings["basic_string"] = opt767;
			optionStrings["char_traits"] = opt768;
			optionStrings["string"] = opt769;
			optionStrings["u16string"] = opt770;
			optionStrings["u32string"] = opt771;
			optionStrings["wstring"] = opt772;
			optionStrings["stoi"] = opt773;
			optionStrings["stol"] = opt774;
			optionStrings["stoul"] = opt775;
			optionStrings["stoll"] = opt776;
			optionStrings["stoull"] = opt777;
			optionStrings["stof"] = opt778;
			optionStrings["stod"] = opt779;
			optionStrings["stold"] = opt780;
			optionStrings["to_string"] = opt781;
			optionStrings["to_wstring"] = opt782;
			optionStrings["error_category"] = opt783;
			optionStrings["error_code"] = opt784;
			optionStrings["error_condition"] = opt785;
			optionStrings["system_error"] = opt786;
			optionStrings["is_error_code_enum"] = opt787;
			optionStrings["is_error_condition_enum"] = opt788;
			optionStrings["errc"] = opt789;
			optionStrings["generic_category"] = opt790;
			optionStrings["system_category"] = opt791;
			optionStrings["make_error_code"] = opt792;
			optionStrings["make_error_condition"] = opt793;
			optionStrings["tuple"] = opt794;
			optionStrings["tuple_size"] = opt795;
			optionStrings["tuple_element"] = opt796;
			optionStrings["make_tuple"] = opt797;
			optionStrings["forward_as_tuple"] = opt798;
			optionStrings["tie"] = opt799;
			optionStrings["tuple_cat"] = opt800;
			optionStrings["get"] = opt801;
			optionStrings["ignore"] = opt802;
			optionStrings["type_index"] = opt803;
			optionStrings["hash<;type_index>;"] = opt804;
			optionStrings["type_info"] = opt805;
			optionStrings["bad_cast"] = opt806;
			optionStrings["bad_typeid"] = opt807;
			optionStrings["integral_constant"] = opt808;
			optionStrings["true_type"] = opt809;
			optionStrings["false_type"] = opt810;
			optionStrings["is_array"] = opt811;
			optionStrings["is_class"] = opt812;
			optionStrings["is_enum"] = opt813;
			optionStrings["is_floating_point"] = opt814;
			optionStrings["is_function"] = opt815;
			optionStrings["is_integral"] = opt816;
			optionStrings["is_lvalue_reference"] = opt817;
			optionStrings["is_member_function_pointer"] = opt818;
			optionStrings["is_member_object_pointer"] = opt819;
			optionStrings["is_pointer"] = opt820;
			optionStrings["is_rvalue_reference"] = opt821;
			optionStrings["is_union"] = opt822;
			optionStrings["is_void"] = opt823;
			optionStrings["is_arithmetic"] = opt824;
			optionStrings["is_compound"] = opt825;
			optionStrings["is_fundamental"] = opt826;
			optionStrings["is_member_pointer"] = opt827;
			optionStrings["is_object"] = opt828;
			optionStrings["is_reference"] = opt829;
			optionStrings["is_scalar"] = opt830;
			optionStrings["is_abstract"] = opt831;
			optionStrings["is_const"] = opt832;
			optionStrings["is_empty"] = opt833;
			optionStrings["is_literal_type"] = opt834;
			optionStrings["is_pod"] = opt835;
			optionStrings["is_polymorphic"] = opt836;
			optionStrings["is_signed"] = opt837;
			optionStrings["is_standard_layout"] = opt838;
			optionStrings["is_trivial"] = opt839;
			optionStrings["is_trivially_copyable"] = opt840;
			optionStrings["is_unsigned"] = opt841;
			optionStrings["is_volatile"] = opt842;
			optionStrings["has_virtual_destructor"] = opt843;
			optionStrings["is_assignable"] = opt844;
			optionStrings["is_constructible"] = opt845;
			optionStrings["is_copy_assignable"] = opt846;
			optionStrings["is_copy_constructible"] = opt847;
			optionStrings["is_destructible"] = opt848;
			optionStrings["is_default_constructible"] = opt849;
			optionStrings["is_move_assignable"] = opt850;
			optionStrings["is_move_constructible"] = opt851;
			optionStrings["is_trivially_assignable"] = opt852;
			optionStrings["is_trivially_constructible"] = opt853;
			optionStrings["is_trivially_copy_assignable"] = opt854;
			optionStrings["is_trivially_copy_constructible"] = opt855;
			optionStrings["is_trivially_destructible"] = opt856;
			optionStrings["is_trivially_default_constructible"] = opt857;
			optionStrings["is_trivially_move_assignable"] = opt858;
			optionStrings["is_trivially_move_constructible"] = opt859;
			optionStrings["is_nothrow_assignable"] = opt860;
			optionStrings["is_nothrow_constructible"] = opt861;
			optionStrings["is_nothrow_copy_assignable"] = opt862;
			optionStrings["is_nothrow_copy_constructible"] = opt863;
			optionStrings["is_nothrow_destructible"] = opt864;
			optionStrings["is_nothrow_default_constructible"] = opt865;
			optionStrings["is_nothrow_move_assignable"] = opt866;
			optionStrings["is_nothrow_move_constructible"] = opt867;
			optionStrings["is_base_of"] = opt868;
			optionStrings["is_convertible"] = opt869;
			optionStrings["is_same"] = opt870;
			optionStrings["alignment_of"] = opt871;
			optionStrings["extent"] = opt872;
			optionStrings["rank"] = opt873;
			optionStrings["add_const"] = opt874;
			optionStrings["add_cv"] = opt875;
			optionStrings["add_volatile"] = opt876;
			optionStrings["remove_const"] = opt877;
			optionStrings["remove_cv"] = opt878;
			optionStrings["remove_volatile"] = opt879;
			optionStrings["add_pointer"] = opt880;
			optionStrings["add_lvalue_reference"] = opt881;
			optionStrings["add_rvalue_reference"] = opt882;
			optionStrings["decay"] = opt883;
			optionStrings["make_signed"] = opt884;
			optionStrings["make_unsigned"] = opt885;
			optionStrings["remove_all_extents"] = opt886;
			optionStrings["remove_extent"] = opt887;
			optionStrings["remove_pointer"] = opt888;
			optionStrings["remove_reference"] = opt889;
			optionStrings["underlying_type"] = opt890;
			optionStrings["aligned_storage"] = opt891;
			optionStrings["aligned_union"] = opt892;
			optionStrings["common_type"] = opt893;
			optionStrings["conditional"] = opt894;
			optionStrings["enable_if"] = opt895;
			optionStrings["result_of"] = opt896;
			optionStrings["valarray"] = opt897;
			optionStrings["slice"] = opt898;
			optionStrings["gslice"] = opt899;
			optionStrings["slice_array"] = opt900;
			optionStrings["gslice_array"] = opt901;
			optionStrings["mask_array"] = opt902;
			optionStrings["indirect_array"] = opt903;
			optionStrings["Valarray_operators"] = opt904;
			optionStrings["+"] = opt905;
			optionStrings["-"] = opt906;
			optionStrings["/"] = opt907;
			optionStrings["*"] = opt908;
			optionStrings["%"] = opt909;
			optionStrings["<"] = opt910;
			optionStrings[">"] = opt911;
			optionStrings["&"] = opt912;
			optionStrings["|"] = opt913;
			optionStrings["!"] = opt914;
			optionStrings["?"] = opt915;
			optionStrings["^"] = opt916;
			optionStrings["~"] = opt917;
			optionStrings["="] = opt918;
			optionStrings["."] = opt919;
			optionStrings[","] = opt920;
			optionStrings["("] = opt921;
			optionStrings[")"] = opt922;
			optionStrings["["] = opt923;
			optionStrings["]"] = opt924;
			optionStrings["{"] = opt925;
			optionStrings["}"] = opt926;
			optionStrings[":"] = opt927;
			optionStrings[";"] = opt928;
			optionStrings["\\"] = opt929;

		
		itr = optionStrings.find(commentarg);
		if( itr != optionStrings.end() ) {
			return itr->second;
		}
		return opt1;
		}
}

