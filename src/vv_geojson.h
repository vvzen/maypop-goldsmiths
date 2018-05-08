#include "ofMain.h"
#include "ofxJSON.h"
#include "vv_extrude_font.h"
#include "vv_map_projections.h"
#include <regex>

namespace vv_geojson {

    struct City {
        std::string name;
        vector <ofMesh> meshes;
        ofPoint position;
    };

    ofPoint create_geojson_map(std::string path, ofTrueTypeFont & font, vector<ofMesh> & poly_meshes, vector<City> & cities_meshes,  float scale);

}