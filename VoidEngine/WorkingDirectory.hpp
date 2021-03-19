#ifndef WorkingDirectory_hpp
#define WorkingDirectory_hpp

#include <string>

class WorkingDirectory
{
public:
	WorkingDirectory();

	inline const std::string& get() 
	{
		return path;
	}
private:
	std::string	path;
};
#endif // !WorkingDirectory_hpp
