#ifndef ResourceAllocator_hpp
#define ResourceAllocator_hpp

#include <map>
#include <memory>
#include <vector>



template<typename T>
class ResourceAllocator
{
	typedef std::shared_ptr<T> ResourcePtr;
	typedef std::map<std::string, std::pair<int, std::shared_ptr<T>>> ResourceMap;

public:
	/// <summary>
	/// If the given resource does not already exist, the resource is given an ID and inserted into the Resource Allocator.
	/// The assigned ID is returned.
	/// </summary>
	/// <param name="filePath"></param>
	/// <returns></returns>
	int add(const std::string& filePath)
	{
		auto it{ resources.find(filePath) };
		if (it != resources.end()) 
		{
			return it->second.first;
		}

		std::shared_ptr<T> resource{ std::make_shared<T>() };
		if (!resource->loadFromFile(filePath)) 
		{
			return -1;
		}

		resources.insert(std::make_pair(filePath, std::make_pair(currentID, resource)));

		return currentID++;
	}

	/// <summary>
	/// Removes the resource linked to the given ID.
	/// </summary>
	/// <param name="id"></param>
	void remove(int id) 
	{
		for (auto it{resources.begin()}; it != resources.end(); ++it)
		{
			if (it->second.first == id) { resources.erase(it->first); }
		}
	}

	/// <summary>
	/// Returns a pointer to the resource linked to the given ID or a nullptr if no resource is found.
	/// </summary>
	/// <param name="id"></param>
	/// <returns></returns>
	ResourcePtr get(int id) 
	{
		for (auto it{resources.begin()}; it != resources.end(); ++it)
		{
			if (it->second.first == id) { return it->second.second; }
		}

		return nullptr;
	}

	/// <summary>
	/// Checks to see if the id exists in the resource allocator.
	/// </summary>
	/// <param name="id"></param>
	/// <returns></returns>
	bool has(int id) 
	{
		return (get(id) != nullptr); 
	}

private:
	int currentID;

	ResourceMap resources;
};
#endif // !ResourceAllocator_hpp
