int main(void)
{
	/*There is type quilifier cast*/
	int a = 42; // Reference value

	int const	*b = &a; //Implicit promotion -> Ok
	//int 		*d = &a  //Implicit demotion -> Hell, NO! Compiler won't allow it
	int			*c = const_cast<int *>(b);

	//const_cast allow you change type quilifier form const to common
	return (0);
}