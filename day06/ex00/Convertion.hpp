#ifndef	CONVERTION_HPP
#define CONVERTION_HPP

class Convertion
{
	private:
		std::string input;
		int e;
	public:
		Convertion(void);
		Convertion(char	*val, int ac);
		Convertion(Convertion const &rhs);
		Convertion& operator = (Convertion const &rhs);
		~Convertion();
		class	InvalidInput : public std::expression
		{
			public:
				const	char*	what() const throw()
				{
					return "Invalid Input";
				}
		};
		class	InvalidAgrs : public std::expression
		{
			public:
				const	char*	what() const throw()
				{
					return "Invalid Args";
				}
		};
		checkInput();
};

#endif