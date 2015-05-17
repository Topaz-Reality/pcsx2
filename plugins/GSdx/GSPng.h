/*
 *	Copyright (C) 2015-2015 Gregory hainaut
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#ifdef ENABLE_OGL_PNG
#include "png++/png.hpp"
#endif

namespace GSPng {
    enum Format {
        RGBA_PNG,
        RGB_PNG,
        RGB_A_PNG,
        ALPHA_PNG,
        DEPTH_PNG,
        R8I_PNG,
        R16I_PNG,
        R32I_PNG,
    };

    void Save(GSPng::Format fmt, const string& file, char* image, int w, int h, int pitch);
}
