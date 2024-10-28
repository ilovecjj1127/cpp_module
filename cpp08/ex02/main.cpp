#include "MutantStack.hpp"
#include <list>

int main(void) {
	std::cout << PINK "----Subject Test----" RESET << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top of mstack: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size of mstack: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << GREEN "[print stack using iterator]: " RESET << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << PINK "----List Test----" RESET << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "Last of mlist: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "Size of mlist: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << GREEN "[print list using iterator]: " RESET << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> l(mlist);
	}
	std::cout << PINK "----Reverse iterator Test----" RESET << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(123);
		mstack.push(456);
		MutantStack<int> mstack_dup(mstack);
		std::cout << "Size of mstack: " << mstack.size() << std::endl;
		std::cout << "Size of mstack duplicate: " << mstack_dup.size() << std::endl;
		mstack.push(789);
		mstack.push(0);
		MutantStack<int>::const_iterator cit = mstack.cbegin();
		MutantStack<int>::const_iterator cite = mstack.cend();
		++cit;
		--cit;
		std::cout << GREEN "[print stack using const_iterator]: " RESET << std::endl;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		std::cout << GREEN "[print stack using reverse_iterator]: " RESET << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	return 0;
}