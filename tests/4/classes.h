/*
	test: constructors with params
*/

#ifndef H_CLASSES
#define H_CLASSES

#include <string>

#define swift __attribute__((annotate("swift")))

class swift OneArgs
{
	public:
		OneArgs( int a );
		
		void method();
		
	protected:
		int _value;
};

class swift TwoArgs
{
	public:
		TwoArgs( const std::string &a, int b = 0 );
		
		void method();
		
	protected:
		std::string _v1;
		int _v2;
};

class swift ThreeArgs
{
	public:
		ThreeArgs( bool a, const std::string &s = "default", bool b = true );
		
		void method();
		
	protected:
		bool _v1, _v3;
		std::string _v2;
};

#endif
