#include <map>
#include <string>
using namespace std;
namespace pkwd {
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
        opt205
    };
	int resolveOption(string commentarg){
		std::map<string, int>optionStrings;
        std::map<string, int>::iterator itr;
			optionStrings["Option_invalid"] = opt1; 
            optionStrings["abs("] = opt2;
            optionStrings["add("] = opt3;
            optionStrings["append("] = opt4;
            optionStrings["arccos("] = opt5;
            optionStrings["arccosh("] = opt6;
            optionStrings["arcsin("] = opt7;
            optionStrings["arcsinh("] = opt8;
            optionStrings["arctan("] = opt9;
            optionStrings["arctanh("] = opt10;
            optionStrings["around("] = opt11;
            optionStrings["array("] = opt12;
            optionStrings["array_split("] = opt13;
            optionStrings["astype("] = opt14;
            optionStrings["bar("] = opt15;
            optionStrings["barh("] = opt16;
            optionStrings["bellman_ford("] = opt17;
            optionStrings["bool("] = opt18;
            optionStrings["breadth_first_order("] = opt19;
            optionStrings["choice("] = opt20;
            optionStrings["clear("] = opt21;
            optionStrings["complex("] = opt22;
            optionStrings["concatenate("] = opt23;
            optionStrings["connected_components("] = opt24;
            optionStrings["ConvexHull("] = opt25;
            optionStrings["copy("] = opt26;
            optionStrings["corr("] = opt27;
            optionStrings["cos("] = opt28;
            optionStrings["cosh("] = opt29;
            optionStrings["count_nonzero("] = opt30;
            optionStrings["cumprod("] = opt31;
            optionStrings["cumsum("] = opt32;
            optionStrings["datetime("] = opt33;
            optionStrings["Delaunay("] = opt34;
            optionStrings["delete_many("] = opt35;
            optionStrings["delete_one("] = opt36;
            optionStrings["depth_first_order("] = opt37;
            optionStrings["describe("] = opt38;
            optionStrings["dict("] = opt39;
            optionStrings["diff("] = opt40;
            optionStrings["dir("] = opt41;
            optionStrings["discard("] = opt42;
            optionStrings["divide("] = opt43;
            optionStrings["divmod("] = opt44;
            optionStrings["drop("] = opt45;
            optionStrings["drop_duplicates("] = opt46;
            optionStrings["dropna("] = opt47;
            optionStrings["dsplit("] = opt48;
            optionStrings["dstack("] = opt49;
            optionStrings["duplicated("] = opt50;
            optionStrings["eliminate_zeros("] = opt51;
            optionStrings["executemany("] = opt52;
            optionStrings["extend("] = opt53;
            optionStrings["fetchall("] = opt54;
            optionStrings["fetchone("] = opt55;
            optionStrings["fillna("] = opt56;
            optionStrings["find("] = opt57;
            optionStrings["findall("] = opt58;
            optionStrings["find_one("] = opt59;
            optionStrings["fit("] = opt60;
            optionStrings["fix("] = opt61;
            optionStrings["float("] = opt62;
            optionStrings["floor("] = opt63;
            optionStrings["floyd_warshall("] = opt64;
            optionStrings["format("] = opt65;
            optionStrings["frompyfunc("] = opt66;
            optionStrings["gcd("] = opt67;
            optionStrings["get("] = opt68;
            optionStrings["grid("] = opt69;
            optionStrings["group("] = opt70;
            optionStrings["head("] = opt71;
            optionStrings["hist("] = opt72;
            optionStrings["hsplit("] = opt73;
            optionStrings["hstack("] = opt74;
            optionStrings["hypot("] = opt75;
            optionStrings["info("] = opt76;
            optionStrings["__init__("] = opt77;
            optionStrings["input("] = opt78;
            optionStrings["insert("] = opt79;
            optionStrings["insert_many("] = opt80;
            optionStrings["insert_one("] = opt81;
            optionStrings["int("] = opt82;
            optionStrings["interp1d("] = opt83;
            optionStrings["interp_func("] = opt84;
            optionStrings["intersect1d("] = opt85;
            optionStrings["intersection("] = opt86;
            optionStrings["intersection_update("] = opt87;
            optionStrings["isinstance("] = opt88;
            optionStrings["items("] = opt89;
            optionStrings["__iter__("] = opt90;
            optionStrings["iter("] = opt91;
            optionStrings["json.dumps("] = opt92;
            optionStrings["json.loads("] = opt93;
            optionStrings["KDTree("] = opt94;
            optionStrings["keys("] = opt95;
            optionStrings["lcm("] = opt96;
            optionStrings["legend("] = opt97;
            optionStrings["len("] = opt98;
            optionStrings["limit("] = opt99;
            optionStrings["LinearRegression("] = opt100;
            optionStrings["list("] = opt101;
            optionStrings["loadmat("] = opt102;
            optionStrings["log("] = opt103;
            optionStrings["log10("] = opt104;
            optionStrings["log2("] = opt105;
            optionStrings["lower("] = opt106;
            optionStrings["map("] = opt107;
            optionStrings["math.abs("] = opt108;
            optionStrings["math.ceil("] = opt109;
            optionStrings["math.floor("] = opt110;
            optionStrings["math.log("] = opt111;
            optionStrings["math.sqrt("] = opt112;
            optionStrings["max("] = opt113;
            optionStrings["mean("] = opt114;
            optionStrings["median("] = opt115;
            optionStrings["min("] = opt116;
            optionStrings["minimize("] = opt117;
            optionStrings["mod("] = opt118;
            optionStrings["remainder("] = opt119;
            optionStrings["mode("] = opt120;
            optionStrings["multiply("] = opt121;
            optionStrings["commit("] = opt122;
            optionStrings["ndenumerate("] = opt123;
            optionStrings["nditer("] = opt124;
            optionStrings["__next__("] = opt125;
            optionStrings["normaltest("] = opt126;
            optionStrings["open("] = opt127;
            optionStrings["rmdir("] = opt128;
            optionStrings["percentile("] = opt129;
            optionStrings["permutation("] = opt130;
            optionStrings["pie("] = opt131;
            optionStrings["plot("] = opt132;
            optionStrings["colorbar("] = opt133;
            optionStrings["pop("] = opt134;
            optionStrings["popitem("] = opt135;
            optionStrings["power("] = opt136;
            optionStrings["print("] = opt137;
            optionStrings["prod("] = opt138;
            optionStrings["query("] = opt139;
            optionStrings["r2_score("] = opt140;
            optionStrings["rand("] = opt141;
            optionStrings["randint("] = opt142;
            optionStrings["random("] = opt143;
            optionStrings["normal("] = opt144;
            optionStrings["range("] = opt145;
            optionStrings["raw_input("] = opt146;
            optionStrings["Rbf("] = opt147;
            optionStrings["read("] = opt148;
            optionStrings["readline("] = opt149;
            optionStrings["reduce("] = opt150;
            optionStrings["remove("] = opt151;
            optionStrings["replace("] = opt152;
            optionStrings["reverse("] = opt153;
            optionStrings["savemat("] = opt154;
            optionStrings["scatter("] = opt155;
            optionStrings["csr_matrix("] = opt156;
            optionStrings["search("] = opt157;
            optionStrings["searchsorted("] = opt158;
            optionStrings["setdiff1d("] = opt159;
            optionStrings["setxor1d("] = opt160;
            optionStrings["shuffle("] = opt161;
            optionStrings["sin("] = opt162;
            optionStrings["sinh("] = opt163;
            optionStrings["sort("] = opt164;
            optionStrings["span("] = opt165;
            optionStrings["split("] = opt166;
            optionStrings["stack("] = opt167;
            optionStrings["StandardScaler("] = opt168;
            optionStrings["std("] = opt169;
            optionStrings["strftime("] = opt170;
            optionStrings["strip("] = opt171;
            optionStrings["sub("] = opt172;
            optionStrings["subplots("] = opt173;
            optionStrings["subtract("] = opt174;
            optionStrings["sum_duplicates("] = opt175;
            optionStrings["super("] = opt176;
            optionStrings["suptitle("] = opt177;
            optionStrings["symmetric_difference("] = opt178;
            optionStrings["symmetric_difference_update("] = opt179;
            optionStrings["tail("] = opt180;
            optionStrings["tan("] = opt181;
            optionStrings["tanh("] = opt182;
            optionStrings["title("] = opt183;
            optionStrings["tocsc("] = opt184;
            optionStrings["to_datetime("] = opt185;
            optionStrings["to_string("] = opt186;
            optionStrings["trunc("] = opt187;
            optionStrings["ttest_ind("] = opt188;
            optionStrings["type("] = opt189;
            optionStrings["union("] = opt190;
            optionStrings["union1d("] = opt191;
            optionStrings["unique("] = opt192;
            optionStrings["UnivariateSpline("] = opt193;
            optionStrings["update("] = opt194;
            optionStrings["update_many("] = opt195;
            optionStrings["update_one("] = opt196;
            optionStrings["upper("] = opt197;
            optionStrings["values("] = opt198;
            optionStrings["var("] = opt199;
            optionStrings["vsplit("] = opt200;
            optionStrings["vstack("] = opt201;
            optionStrings["where("] = opt202;
            optionStrings["xlabel("] = opt203;
            optionStrings["ylabel("] = opt204;
            optionStrings["zip("] = opt205;

        itr = optionStrings.find(commentarg);
		if( itr != optionStrings.end() ) {
			return itr->second;
		}
		return opt1;
		}
		
}
