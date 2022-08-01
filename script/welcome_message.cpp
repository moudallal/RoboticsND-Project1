#include <gazebo/gazebo.hh>

namespace gazebo {
    class WorldPluginRoverBot: public WorldPlugin {
        public: WorldPluginRoverBot(): WorldPlugin() {
            printf("Welcome to Mo's Mountain House World!\n");
        }
        public : void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {

        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginRoverBot)
}