# BasicBench
Basic benchmark
---
```
#include "BasicBench.h"

void testfunction()
{
	BasicBench timetest;

	int i = 0;
	while (i < 1000)
	{
		std::cout << "Hi.\r\n";
		i++;
	}

}

int main() {
	testfunction();

	system("pause");
	return TRUE;
}
```

Once the function ends it will print to the console how long the function took to complete its exicution.
