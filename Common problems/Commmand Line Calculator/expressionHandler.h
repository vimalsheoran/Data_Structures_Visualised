#include <stack>

class Prefix{
public:
	char* convertToPrefix(char *);
	int evalPrefixedExp(char *);
	int calculateExp(char, char, char);

private:
	void pushToExpBuffer(char);
	char prefixBuffer[100];
	int activeBufferIndex;
	std::stack <char> operatorBuffer;
};

extern Prefix prefix;