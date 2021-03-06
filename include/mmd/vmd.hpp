#ifndef __MMD_VMD_ALL
#define __MMD_VMD_ALL

#include "vmd/header.hpp"
#include "vmd/keyframe.hpp"
#include "vmd/face.hpp"

namespace mmd {
    namespace vmd {

        struct MMDAPI Motion {
            Header header;
            std::vector<Keyframe> keyframes;
            std::map<std::string, std::vector<Keyframe *> >  bones;

            std::vector<Face> faceKeys;
            std::map<std::string, std::vector<Face *> > faces;

            void load(Fs *fs);
        };

    } /* vmd */
} /* mmd */

#endif
