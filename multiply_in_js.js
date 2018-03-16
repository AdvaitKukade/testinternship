mergeInto(LibraryManager.library, {
multiply_in_js: function(x,y) 
{
	output("multiplying in js : \nX co-ordinate = " + x + ", Y co-ordinate = " + y + "\nHence " + x + " * " + y + " = " + x*y + "\n");
	return x*y;
},
});