#include <string>
#include "pyenum.h"
using namespace std;
string pycommentMake(string commentarg){ //, string A1, string A2, string A3
    string comment = "";
	switch (pkwd::resolveOption(commentarg)){
		case pkwd::opt1:
		//Option_invalid
		comment += " " + commentarg;
		break;
        case pkwd::opt2:
        //abs
        comment += " function return the absolute (positive) value of 1^{the specified number}";
        break;
        case pkwd::opt3:
        //add
        comment += " function sums the content of 1^{} 2^{}, and return the results in a new array";
        break;
        case pkwd::opt4:
        //append
        comment += " append an item";
        break;
        case pkwd::opt5:
        //arccos
        comment += " radian value for 1^{corresponding cos}";
        break;
        case pkwd::opt6:
        //arccosh
        comment += " radian value for 1^{corresponding cosh}";
        break;
        case pkwd::opt7:
        //arcsin
        comment += " radian value for 1^{corresponding sin}";
        break;
        case pkwd::opt8:
        //arcsinh
        comment += " radian value for 1^{corresponding sinh}";
        break;
        case pkwd::opt9:
        //arctan
        comment += " radian value for 1^{corresponding tan}";
        break;
        case pkwd::opt10:
        //arctanh
        comment += " radian value for 1^{corresponding tanh}";
        break;
        case pkwd::opt11:
        //around
        comment += " rounds 1^{} to whole number";
        break;
        case pkwd::opt12:
        //array
        comment += " create numpy array";
        break;
        case pkwd::opt13:
        //array_split
        comment += " for splitting arrays, we pass 1^{it the array we want} to split and the number of splits 2^{}";
        break;
        case pkwd::opt14:
        //astype
        comment += " function creates a copy of 1^{the array}, and allows you to specifies 2^{data type} as a parameter";
        break;
        case pkwd::opt15:
        //bar
        comment += " function takes arguments that describes the layout of the bars";
        break;
        case pkwd::opt16:
        //barh
        comment += " function takes arguments that describes the layout of the bars horizontally";
        break;
        case pkwd::opt17:
        //bellman_ford
        comment += " find the shortest path between all pairs of elements in";
        break;
        case pkwd::opt18:
        //bool
        comment += " return the boolean value of 1^{a specified object}";
        break;
        case pkwd::opt19:
        //breadth_first_order
        comment += " return a breadth first traversal from a node";
        break;
        case pkwd::opt20:
        //choice
        comment += " takes 1^{an array} as a parameter and randomly return one of the values";
        break;
        case pkwd::opt21:
        //clear
        comment += " empties the container";
        break;
        case pkwd::opt22:
        //complex
        comment += " return a complex number by specifying 1^{a real number} 2^{and an imaginary number} i";
        break;
        case pkwd::opt23:
        //concatenate
        comment += " concatenate 1^{arrays}";
        break;
        case pkwd::opt24:
        //connected_components
        comment += " Find all of the connected components";
        break;
        case pkwd::opt25:
        //ConvexHull
        comment += " create a Convex Hull";
        break;
        case pkwd::opt26:
        //copy
        comment += " copy 1^{the set}";
        break;
        case pkwd::opt27:
        //corr
        comment += " calculates the relationship between each column in your data set";
        break;
        case pkwd::opt28:
        //cos
        comment += " find cos value for";
        break;
        case pkwd::opt29:
        //cosh
        comment += " find hyperbolic cos value for";
        break;
        case pkwd::opt30:
        //count_nonzero
        comment += " count number of non zero values in array";
        break;
        case pkwd::opt31:
        //cumprod
        comment += " return a DataFrame with the cumulative product for each row";
        break;
        case pkwd::opt32:
        //cumsum
        comment += " return a DataFrame with the cumulative sum for each row";
        break;
        case pkwd::opt33:
        //datetime
        comment += " create a date using";
        break;
        case pkwd::opt34:
        //Delaunay
        comment += " generate these triangulations through points";
        break;
        case pkwd::opt35:
        //delete_many
        comment += " delete";
        break;
        case pkwd::opt36:
        //delete_one
        comment += "  delete";
        break;
        case pkwd::opt37:
        //depth_first_order
        comment += " return a depth first traversal from 1^{a node}";
        break;
        case pkwd::opt38:
        //describe
        comment += " method return description of the data in the DataFrame";
        break;
        case pkwd::opt39:
        //dict
        comment += " create a dictionary using";
        break;
        case pkwd::opt40:
        //diff
        comment += " return a DataFrame with the difference between the values for each row and, by default, the previous row";
        break;
        case pkwd::opt41:
        //dir
        comment += " return all properties and methods of the specified object, without the values";
        break;
        case pkwd::opt42:
        //discard
        comment += " removes 1^{the specified item} from the set";
        break;
        case pkwd::opt43:
        //divide
        comment += " divide the values from 1^{one array} with the values from 2^{another array},and return the results in a new array";
        break;
        case pkwd::opt44:
        //divmod
        comment += " return both the quotient and the the mod of";
        break;
        case pkwd::opt45:
        //drop
        comment += " return true if the collection was dropped successfully, and false if the collection does not exist";
        break;
        case pkwd::opt46:
        //drop_duplicates
        comment += " remove duplicates";
        break;
        case pkwd::opt47:
        //dropna
        comment += " return a new DataFrame, and will not change the original";
        break;
        case pkwd::opt48:
        //dsplit
        comment += " split the 2-D array into three 2-D arrays along depth";
        break;
        case pkwd::opt49:
        //dstack
        comment += " to stack along height, which is the same as depth";
        break;
        case pkwd::opt50:
        //duplicated
        comment += " return a Series with True and False values that describe which rows in the DataFrame are duplicated and not";
        break;
        case pkwd::opt51:
        //eliminate_zeros
        comment += " remove all zeroes";
        break;
        case pkwd::opt52:
        //executemany
        comment += " insert multiple rows into a table";
        break;
        case pkwd::opt53:
        //extend
        comment += " does not have to appendlists, you can add any iterable object (tuples, sets, dictionaries etc";
        break;
        case pkwd::opt54:
        //fetchall
        comment += ", which fetches all rows from the last executed statement";
        break;
        case pkwd::opt55:
        //fetchone
        comment += " fetch one row from the database";
        break;
        case pkwd::opt56:
        //fillna
        comment += " replace the NULL values with 1^{a specified value}";
        break;
        case pkwd::opt57:
        //find
        comment += " return all occurrences in 1^{the selection}";
        break;
        case pkwd::opt58:
        //findall
        comment += " return a list containing all matches";
        break;
        case pkwd::opt59:
        //find_one
        comment += " return the first occurrence in the selection";
        break;
        case pkwd::opt60:
        //fit
        comment += " take the independent and dependent values as parameters and fills the regression object with data that describes the relationship";
        break;
        case pkwd::opt61:
        //fix
        comment += " round elements of the array to the nearest integer towards zero";
        break;
        case pkwd::opt62:
        //float
        comment += " convert 1^{} to float ";
        break;
        case pkwd::opt63:
        //floor
        comment += " round 1^{} downward";
        break;
        case pkwd::opt64:
        //floyd_warshall
        comment += " find shortest path between all pairs of elements";
        break;
        case pkwd::opt65:
        //format
        comment += " allows you to format selected parts of a string";
        break;
        case pkwd::opt66:
        //frompyfunc
        comment += " create ufunc called 1^{} using 2^{} inputs and 3^{} outputs";
        break;
        case pkwd::opt67:
        //gcd
        comment += " greatest common divisor";
        break;
        case pkwd::opt68:
        //get
        comment += " get 1^{the value} of the item with 2^{the specified key}";
        break;
        case pkwd::opt69:
        //grid
        comment += " add grid lines to the plot";
        break;
        case pkwd::opt70:
        //group
        comment += " return the part of the string where there was a regex match ";
        break;
        case pkwd::opt71:
        //head
        comment += " return the headers and 1^{a specified number of} rows, starting from the top";
        break;
        case pkwd::opt72:
        //hist
        comment += " create histograms | use an array of numbers to create a histogram, the array is sent into the function as an argument";
        break;
        case pkwd::opt73:
        //hsplit
        comment += " split the 2-D array into three 2-D arrays horizontally";
        break;
        case pkwd::opt74:
        //hstack
        comment += " stack along rows";
        break;
        case pkwd::opt75:
        //hypot
        comment += " function that takes the base and perpendicular values and produces hypotenues based on pythagoras theorem";
        break;
        case pkwd::opt76:
        //info
        comment += " gives you more information about the data set";
        break;
        case pkwd::opt77:
        //__init__
        comment += " do some initializing when the object is being created";
        break;
        case pkwd::opt78:
        //input
        comment += " user input:";
        break;
        case pkwd::opt79:
        //insert
        comment += " insert 1^{the specified value} at 1^{the specified position}";
        break;
        case pkwd::opt80:
        //insert_many
        comment += " return an InsertManyResult object, which has a property, inserted_ids, that holds the ids of the inserted documents";
        break;
        case pkwd::opt81:
        //insert_one
        comment += " return a InsertOneResult object, which has a property, inserted_id, that holds the id of the inserted document";
        break;
        case pkwd::opt82:
        //int
        comment += " convert to integer";
        break;
        case pkwd::opt83:
        //interp1d
        comment += " is used to interpolate a distribution with 1 variable";
        break;
        case pkwd::opt84:
        //interp_func
        comment += " with values higher than 10, or less than 0";
        break;
        case pkwd::opt85:
        //intersect1d
        comment += " takes an optional argument assume_unique,which if set to True can speed up computation";
        break;
        case pkwd::opt86:
        //intersection
        comment += " will return a new set, that only contains the items that are present in both sets";
        break;
        case pkwd::opt87:
        //intersection_update
        comment += " will keep only the items that are present in both sets";
        break;
        case pkwd::opt88:
        //isinstance
        comment += " ";
        break;
        case pkwd::opt89:
        //items
        comment += " will return each item in a dictionary, as tuples in a list";
        break;
        case pkwd::opt90:
        //__iter__
        comment += " acts similar to __next__(), you can do operations, initializing etc";
        break;
        case pkwd::opt91:
        //iter
        comment += " return an iterator object";
        break;
        case pkwd::opt92:
        //json.dumps
        comment += " order the keys in the result";
        break;
        case pkwd::opt93:
        //json.loads
        comment += " parse json object";
        break;
        case pkwd::opt94:
        //KDTree
        comment += " return a KDTree object";
        break;
        case pkwd::opt95:
        //keys
        comment += " will return a list of all the keys in the dictionary";
        break;
        case pkwd::opt96:
        //lcm
        comment += " lowest common multiple of";
        break;
        case pkwd::opt97:
        //legend
        comment += " list explenations of each wedge";
        break;
        case pkwd::opt98:
        //len
        comment += " function return the length of the object ";
        break;
        case pkwd::opt99:
        //limit
        comment += " takes one parameter, a number defining how many documents to return";
        break;
        case pkwd::opt100:
        //LinearRegression
        comment += " create a linear regression object";
        break;
        case pkwd::opt101:
        //list
        comment += " constructor to make a List";
        break;
        case pkwd::opt102:
        //loadmat
        comment += " function allows us to import data from a Matlab file";
        break;
        case pkwd::opt103:
        //log
        comment += " perform log at the base e";
        break;
        case pkwd::opt104:
        //log10
        comment += " perform log at the base 10";
        break;
        case pkwd::opt105:
        //log2
        comment += " perform log at the base 2";
        break;
        case pkwd::opt106:
        //lower
        comment += " return 1^{the string} in lower case";
        break;
        case pkwd::opt107:
        //map
        comment += " that takes a dictionary with information on how to convert the values";
        break;
        case pkwd::opt108:
        //math.abs
        comment += " get absolute value";
        break;
        case pkwd::opt109:
        //math.ceil
        comment += " round up";
        break;
        case pkwd::opt110:
        //math.floor
        comment += " round down";
        break;
        case pkwd::opt111:
        //math.log
        comment += " get logarithm";
        break;
        case pkwd::opt112:
        //math.sqrt
        comment += " get square root";
        break;
        case pkwd::opt113:
        //max
        comment += " return the item with the highest value of";
        break;
        case pkwd::opt114:
        //mean
        comment += " find the average";
        break;
        case pkwd::opt115:
        //median
        comment += " find the middle value";
        break;
        case pkwd::opt116:
        //min
        comment += " return the item with the smallest value of";
        break;
        case pkwd::opt117:
        //minimize
        comment += " minimize the function";
        break;
        case pkwd::opt118:
        //mod
        comment += " return the remainder of the values in 1^{the first array} corresponding to the values in 1^{the second array}, and return the results in a new array";
        break;
        case pkwd::opt119:
        //remainder
        comment += " return the remainder of the values in 1^{the first array} corresponding to the values in 1^{the second array}, and return the results in a new array";
        break;
        case pkwd::opt120:
        //mode
        comment += " find the number that appears the most";
        break;
        case pkwd::opt121:
        //multiply
        comment += " function multiplies the values from 1^{one array} with the values from 2^{another array},and return the results in a new array";
        break;
        case pkwd::opt122:
        //commit
        comment += " commit 1^{} to database";
        break;
        case pkwd::opt123:
        //ndenumerate
        comment += " can be used for those usecases";
        break;
        case pkwd::opt124:
        //nditer
        comment += " a helping function that can be used from very basic to very advanced iterations";
        break;
        case pkwd::opt125:
        //__next__
        comment += " also allows you to do operations, and must return the next item in the sequence";
        break;
        case pkwd::opt126:
        //normaltest
        comment += " return p value for the null hypothesis";
        break;
        case pkwd::opt127:
        //open
        comment += " function return a file object";
        break;
        case pkwd::opt128:
        //rmdir
        comment += " remove 1^{a directory}";
        break;
        case pkwd::opt129:
        //percentile
        comment += " find the percentiles";
        break;
        case pkwd::opt130:
        //permutation
        comment += " return a re-arranged array (and leaves the original array un-changed)";
        break;
        case pkwd::opt131:
        //pie
        comment += " draw pie chart";
        break;
        case pkwd::opt132:
        //plot
        comment += " function draws a line from point to point";
        break;
        case pkwd::opt133:
        //colorbar
        comment += " show colourbar";
        break;
        case pkwd::opt134:
        //pop
        comment += " remove an element from the array";
        break;
        case pkwd::opt135:
        //popitem
        comment += " removes the last inserted item ";
        break;
        case pkwd::opt136:
        //power
        comment += " function rises the values from the first array to the power of the values of the second array,and return the results in a new array";
        break;
        case pkwd::opt137:
        //print
        comment += " print";
        break;
        case pkwd::opt138:
        //prod
        comment += " return the product of the elements from 1^{the given iterable}";
        break;
        case pkwd::opt139:
        //query
        comment += " return the distance to the nearest neighbor and the location of the neighbors";
        break;
        case pkwd::opt140:
        //r2_score
        comment += " that will help us find this relationship";
        break;
        case pkwd::opt141:
        //rand
        comment += " return a random float between 0 and 1";
        break;
        case pkwd::opt142:
        //randint
        comment += " takes a sizeparameter where you can specify the shape of an array";
        break;
        case pkwd::opt143:
        //random
        comment += " return random number";
        break;
        case pkwd::opt144:
        //normal
        comment += " get a Normal Data Distribution";
        break;
        case pkwd::opt145:
        //range
        comment += " create an iterable";
        break;
        case pkwd::opt146:
        //raw_input
        comment += " python 2.7 input() method";
        break;
        case pkwd::opt147:
        //Rbf
        comment += " takes 1^{xs} 2^{and ys} as arguments and produces a callable function that can be called with 3^{new xs}";
        break;
        case pkwd::opt148:
        //read
        comment += " return the specified number of bytes from the file";
        break;
        case pkwd::opt149:
        //readline
        comment += " return the specified number of bytes from the line";
        break;
        case pkwd::opt150:
        //reduce
        comment += " will use the ufunc on each element and reduce the array by one dimension";
        break;
        case pkwd::opt151:
        //remove
        comment += " removes the specified item";
        break;
        case pkwd::opt152:
        //replace
        comment += " replaces a string with another string:print(a";
        break;
        case pkwd::opt153:
        //reverse
        comment += " reverses the current sorting order of the elements";
        break;
        case pkwd::opt154:
        //savemat
        comment += " function allows us to export data in Matlab format";
        break;
        case pkwd::opt155:
        //scatter
        comment += " draw a scatter plot";
        break;
        case pkwd::opt156:
        //csr_matrix
        comment += " Create a CSR matrix from an array";
        break;
        case pkwd::opt157:
        //search
        comment += " function searches the string for a match, and return a Match object if there is a match";
        break;
        case pkwd::opt158:
        //searchsorted
        comment += " perform a binary search in the array,and return the index where the specified value would be inserted to maintain the search order";
        break;
        case pkwd::opt159:
        //setdiff1d
        comment += " takes an optional argument assume_unique,which if set to True can speed up computation";
        break;
        case pkwd::opt160:
        //setxor1d
        comment += " takes an optional argument assume_unique,which if set to True can speed up computation";
        break;
        case pkwd::opt161:
        //shuffle
        comment += " makes changes to the original array";
        break;
        case pkwd::opt162:
        //sin
        comment += " take values in radians and produce the corresponding sin value";
        break;
        case pkwd::opt163:
        //sinh
        comment += " take values in radians and produce the corresponding sinh value";
        break;
        case pkwd::opt164:
        //sort
        comment += " sort the object in ascending or descending order";
        break;
        case pkwd::opt165:
        //span
        comment += " return a tuple containing the start-, and end positions of the match";
        break;
        case pkwd::opt166:
        //split
        comment += " return a list where the text between the specified separator becomes the list items";
        break;
        case pkwd::opt167:
        //stack
        comment += " along with the axis";
        break;
        case pkwd::opt168:
        //StandardScaler
        comment += "which return a Scaler object with methods for transforming data sets";
        break;
        case pkwd::opt169:
        //std
        comment += " find the standard deviation";
        break;
        case pkwd::opt170:
        //strftime
        comment += " format a local time and/or date according to locale settings";
        break;
        case pkwd::opt171:
        //strip
        comment += " removes any whitespace from the beginning or the end:print(a";
        break;
        case pkwd::opt172:
        //sub
        comment += " replace the matches with the text of your choice";
        break;
        case pkwd::opt173:
        //subplots
        comment += " function takes three arguments that describes the layout of the figure";
        break;
        case pkwd::opt174:
        //subtract
        comment += " function subtracts the values from one array with the values from another array,and return the results in a new array";
        break;
        case pkwd::opt175:
        //sum_duplicates
        comment += " eliminate duplicate entries";
        break;
        case pkwd::opt176:
        //super
        comment += " give access to methods and properties of a parent or sibling class";
        break;
        case pkwd::opt177:
        //suptitle
        comment += " add a title to the figure";
        break;
        case pkwd::opt178:
        //symmetric_difference
        comment += " returns a set that contains all items from 1^{both sets}, but not the items that are present in both sets";
        break;
        case pkwd::opt179:
        //symmetric_difference_update
        comment += " update the original set by removing items that are present in 1^{both sets}, and inserting the other items";
        break;
        case pkwd::opt180:
        //tail
        comment += " return a specified1^{ number of last rows";
        break;
        case pkwd::opt181:
        //tan
        comment += " take values in radians and produce the corresponding tan value";
        break;
        case pkwd::opt182:
        //tanh
        comment += " take values in radians and produce the corresponding tanh value";
        break;
        case pkwd::opt183:
        //title
        comment += " position the title";
        break;
        case pkwd::opt184:
        //tocsc
        comment += " convert compressed sparse row to collumn";
        break;
        case pkwd::opt185:
        //to_datetime
        comment += " converted to date/time format";
        break;
        case pkwd::opt186:
        //to_string
        comment += " converted to string";
        break;
        case pkwd::opt187:
        //trunc
        comment += " returns the truncated integer part of";
        break;
        case pkwd::opt188:
        //ttest_ind
        comment += " take two samples of same size and produces a tuple of t-statistic1^{} and p-value 2^{}";
        break;
        case pkwd::opt189:
        //type
        comment += " return the type of";
        break;
        case pkwd::opt190:
        //union
        comment += " return a set that contains all items from the 1^{original set}, and all items from 2^{the specified set(s)}";
        break;
        case pkwd::opt191:
        //union1d
        comment += " find the unique values of 1^{two arrays}";
        break;
        case pkwd::opt192:
        //unique
        comment += " find the unique elements of";
        break;
        case pkwd::opt193:
        //UnivariateSpline
        comment += " interpolates through 1^{a piecewise polynomial}";
        break;
        case pkwd::opt194:
        //update
        comment += " insert to the dictionary";
        break;
        case pkwd::opt195:
        //update_many
        comment += " update multiple mongoDB records or documents";
        break;
        case pkwd::opt196:
        //update_one
        comment += " update one mongoDB record or document";
        break;
        case pkwd::opt197:
        //upper
        comment += " convert to upper case";
        break;
        case pkwd::opt198:
        //values
        comment += " return view object containing elements of an array";
        break;
        case pkwd::opt199:
        //var
        comment += " Compute the variance of array elements along the axis";
        break;
        case pkwd::opt200:
        //vsplit
        comment += " split the 2-D array into three 2-D arrays along collumns";
        break;
        case pkwd::opt201:
        //vstack
        comment += " stack along columns [better explanation needed]";
        break;
        case pkwd::opt202:
        //where
        comment += " return the indices of elements in an input array ";
        break;
        case pkwd::opt203:
        //xlabel
        comment += " set a label for x-axis";
        break;
        case pkwd::opt204:
        //ylabel
        comment += " set a label for y-axis";
        break;
        case pkwd::opt205:
        //zip
        comment += " return a zip object";
        break;
        case pkwd::opt206:
        //str
        comment += " convert to string";
        break;
    }
    return comment;
}
