//
//  Shader.fsh
//  TestOpenGL
//
//  Created by 文杰 胡 on 12-12-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//
varying highp vec2 texcoord0;
varying lowp vec4 color0;

uniform sampler2D paintTex;

void main()
{
    lowp vec4 cPaint = texture2D(paintTex, texcoord0);
    
    gl_FragColor.rgb = cPaint.rgb * color0.rgb;
//    gl_FragColor.rgb = vec3(0, 0, 1);
    gl_FragColor.a = color0.a;
}