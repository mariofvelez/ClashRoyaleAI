#include "ReplayReader.h"

#include "myhtml/api.h"

ReplayReader::ReplayReader()
{

}

ReplayReader::~ReplayReader()
{

}

Replay* ReplayReader::loadReplay(const char* filename)
{
	/*std::unique_ptr<Replay> replay = std::make_unique<Replay>();

	std::ifstream file(filename);
	std::string str;

	if (file.is_open())
	{
		while (getline(file, str))
		{
			std::cout << str << std::endl;
		}
	}

	return replay.get();*/

    char html[] = "<div><span>HTML</span></div>";

    // basic init
    myhtml_t* myhtml = myhtml_create();
    myhtml_init(myhtml, MyHTML_OPTIONS_DEFAULT, 1, 0);

    // first tree init
    myhtml_tree_t* tree = myhtml_tree_create();
    myhtml_tree_init(tree, myhtml);

    // parse html
    myhtml_parse(tree, MyENCODING_UTF_8, html, strlen(html));

    

    // release resources
    myhtml_tree_destroy(tree);
    myhtml_destroy(myhtml);
}