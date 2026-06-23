#include "MutantStack.hpp"

// int main(void)
// {
// 	MutantStack<long> ms;

// 	ms.push(0);
// 	ms.push(1);
// 	ms.push(2);
// 	ms.push(3);
// 	ms.push(4);
// 	ms.push(5);

// 	MutantStack<long> ms2;
// 	ms2 = ms;

// 	if (ms.empty())
// 		std::cout << "the ms is empty" << std::endl;
// 	MutantStack<long>::iterator end_it = ms.end();
// 	end_it--;
// 	std::cout << "Begin: " << *ms.begin() << " End: " << *end_it << std::endl;
// 	return (0);
// }

int main()
{
	std::cout << "========= Mutant stack ========" << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	// std::cout << "\n========== stack ==============" << std::endl;

	// s.push(5);
	// s.push(17);
	// std::cout << s.top() << std::endl;
	// s.pop();
	// std::cout << s.size() << std::endl;
	// s.push(3);
	// s.push(5);
	// s.push(737);
	// s.push(0);
	// MutantStack<int>::iterator it3 = s.begin();
	// MutantStack<int>::iterator ite3 = s.end();
	// ++it3;
	// --it3;
	// while (it3 != ite3)
	// {
	// 	std::cout << *it3 << std::endl;
	// 	++it3;
	// }

	std::cout << "\n========== list test ==========" << std::endl;
	std::cout << std::endl;

	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << mstack2.back() << std::endl;
	mstack2.pop_back();
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);
	mstack2.push_back(0);
	std::list<int>::iterator it2 = mstack2.begin();
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	//std::stack<int> s(mstack);
	return 0;
}