#ifndef CONVERTER_H
#define CONVERTER_H
# include <iostream>
# include <cmath>
# include <climits>
# include <cctype>
# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <sstream>
# include <cstdlib>


class Convert
{
public:
	Convert();
	~Convert();
	Convert(const Convert &);
	Convert	&operator=(const Convert &);
	void			converter(char *str, int flag);

private:
	void 			printInt(double rep);
	void 			printChar(char *str);
	void 			printDouble(double rep);
	void 			printFloat(double rep);
};

#endif