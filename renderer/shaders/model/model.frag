#version 450

#extension GL_ARB_separate_shader_objects:enable


layout(location = 1) in vec2 inUV;

layout(location = 0) out vec4 outColor;

layout(binding = 2) uniform sampler2D texSampler;

void main(){
	
	outColor = texture(texSampler, inUV);

}