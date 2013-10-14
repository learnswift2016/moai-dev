// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef	MOAIVECTORPOLYGON_H
#define	MOAIVECTORPOLYGON_H

#include <moai-sim/MOAIVectorPath.h>

//================================================================//
// MOAIVectorPolygon
//================================================================//
class MOAIVectorPolygon :
	public MOAIVectorPath {
private:

public:
	
	//----------------------------------------------------------------//
	void			AddFillContours			( TESStesselator* tess );
	void			AddStrokeContours		( TESStesselator* tess );
					MOAIVectorPolygon		();
					~MOAIVectorPolygon		();
	
};

#endif