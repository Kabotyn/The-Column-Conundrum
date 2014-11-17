#include <iostream>
#include <fstream>
#include <vector>

class ColumnCreator {
private:
	std::string file_path; // path to file with input data
	std::ifstream input_file; // handle to file with input data
	int cols_number; // number of colums
	int col_width; // number chars in one column
	int space_width; // nomber of spaces between the columns
	
	std::vector<std::string> lines; // ready lines which are col_width lenght
	std::string columns;
	
	void readParamsFromFile(void);
	void split2ColumnLine(void);
	void creatColumns(void);
	
public:
	ColumnCreator(std::string);
	
	
	
	
};