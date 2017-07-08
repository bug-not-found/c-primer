// cppprimer_ch12_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"cppprimer_ch12_2.h"
#include<iostream>

int main()
{
	StrBlob const csb{ "hello", "Word", "jx" };
	StrBlob sb{"hi", "sz", "bso"};
	std::cout << csb.front() << " " << csb.back() << std::endl;
	
	std::cout << sb.front() << " " << sb.back() << std::endl;
    return 0;
}

