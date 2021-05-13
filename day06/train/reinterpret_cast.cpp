int main(void)
{
	float 	a =420.042f; // Reference value

	void	*b = &a;							// Implicit promotion - Ok;
	int		*c = reinterpret_cast<int *>(b); 	//Explicit demotion -> Ok, I obey
	int		&d = reinterpret_cast<int &>(b); 	//Explicit demotion -> OK, I obey

	return (0);
	/*
	reinterpret_cast may be used for example, when you're recieving
	some amount of data, and you don't know, what actually it is,
	but you can assume, that it is char* data, and reinterpret_cast
	it to std::string;
	*/
}