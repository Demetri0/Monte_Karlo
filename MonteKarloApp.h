#pragma once
#include <iostream>
#include <vector>
#include "point.h"
#include "polyangle.h"
#include "grn.h"

class MonteKarloApp
{
protected:
	// fields
	int	Space;
	int controlSpace;
	Polyangle* testing;
	Polyangle* control;
	std::vector<Point> pointSet;
	grn* m_rundom;

	//methods
		// generations
	void generatePontsSet();   // genereate set of points for calculations
	void generateControlShape();	   // generate the shape with known space for calculations

		// calculations
	int calculateAmountPointsInShape(Polyangle *polygon); // in dependence an amount of the points in a shape,
	float calculateSpase();								  // calculating the space of this shape
	std::vector<int> calculateExtremumCoords(Polyangle *shape);
	

public:
	MonteKarloApp();
	~MonteKarloApp();

	//methods
		// settings
	virtual void loadShape(std::string path) {};	// take a shape for 	 // from file
	void setShape(std::vector<Point> dots);	// calculate her spase
	void setShape(Polyangle *shape);
	void setShape(Polyangle shape);
		// returning
	float getSpace();
};
