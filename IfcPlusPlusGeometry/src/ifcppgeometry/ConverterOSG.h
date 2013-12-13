/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com  - Copyright (C) 2011 Fabian Gerold
 *
 * This library is open source and may be redistributed and/or modified under  
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * OpenSceneGraph Public License for more details.
*/

//! @author Fabian Gerold
//! @date 2011-11-14

#pragma once

#include <osg/Matrix>
#include <osg/Geode>
#include "ifcpp/model/shared_ptr.h"

namespace carve
{
	namespace input
	{
		struct PolyhedronData;
		struct PolylineSetData;
	}

	namespace poly
	{
		class Polyhedron;
	}
	namespace mesh
	{
		template<unsigned int ndim> class Face;
		template<unsigned int ndim> class Mesh;
		template<unsigned int ndim> class MeshSet;
	}
}

class ConverterOSG
{
public:
	ConverterOSG();
	~ConverterOSG();

	static void drawFace(		const carve::mesh::Face<3>* face,								osg::Geode* geode, bool add_color_array = false );
	static void drawMesh(		const carve::mesh::Mesh<3>* mesh,								osg::Geode* geode, bool add_color_array = false );
	static void drawOpenMesh(	const shared_ptr<carve::input::PolyhedronData>& poly_data,		osg::Geode* geode, bool add_color_array = false );
	static void drawMeshSet(	const shared_ptr<carve::mesh::MeshSet<3> >& mesh_set,			osg::Geode* geode, bool add_color_array = false );
	static void drawPolyhedron( const shared_ptr<carve::poly::Polyhedron>& polyhedron,			osg::Geode* geode, bool add_color_array = false );
	static void drawPolyline(	const shared_ptr<carve::input::PolylineSetData>& polyline_data, osg::Geode* geode, bool add_color_array = false );
	static bool checkMeshSet( shared_ptr<carve::mesh::MeshSet<3> >& mesh_set, std::stringstream& err_poly, int entity_id );
	static void convertOsgGroup( const osg::Group* src, carve::input::PolyhedronData& target );
	static void createTest( osg::Group* group );
	static void createTest2( osg::Group* group );
	static void createTest4( osg::Group* group );
};
