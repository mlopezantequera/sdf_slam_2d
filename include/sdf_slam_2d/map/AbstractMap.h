//=================================================================================================
//Copyright (C) 2015, Joscha Fossel
//
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation; either version 2 of the License, or
//any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License along
//with this program; if not, write to the Free Software Foundation, Inc.,
//51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//=================================================================================================

#ifndef SDF_SLAM_2D_ABSTRACTMAP_H
#define SDF_SLAM_2D_ABSTRACTMAP_H

#include "../utility/Types.h"


namespace sdfslam{


    class AbstractMap {

    public:

       //virtual AbstractMap(unsigned long p_map_size_x, unsigned long p_map_size_y){};

       // virtual ~AbstractMap(){};


        virtual void update_map(const PCLPointCloud& pc, const Eigen::Vector3f& pose3d){};

        //returns case if scan endpoint is within grid res range of wall
        virtual int get_map_values(const Eigen::Vector2f& coords, float *mpdxdy, bool fine){};

    protected:

    };

}

#endif //SDF_SLAM_2D_ABSTRACTMAP_H