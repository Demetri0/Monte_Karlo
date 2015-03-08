#pragma once
#include <iostream>
#include <vector>
#include "point.h"
#include "polyangle.h"

class Application
{
private:
	// fields
	int	i_Space;
	Polyangle Shape;
	std::vector<Point> pointSet;

	//methods
		// generations
	void generatePontsSet();   // genereate set of points for calculations
	void generateShape();	   // generate the shape with known space for calculations

		// calculations
	int calculateAmountPointsInShape(Polyangle *polygon); // in dependence an amount of the points in a shape,
	void calculateSpase();								  // calculating the space of this shape

public:
	Application();
	~Application();

	//methods
		// settings
	void setShape(std::string path);				// take a shape for 
	void setShape(std::vector<int> coordinates)		// calculate her spase
		// returning
	
};
