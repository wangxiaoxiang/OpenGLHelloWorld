#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "demo_scene.h"
#include "shader_samples.h"

using namespace std;
using namespace Hyhy;

int main() {

    auto samples = ShaderSamples();
    // 程序运行
    samples.run();
    return 0;
}




