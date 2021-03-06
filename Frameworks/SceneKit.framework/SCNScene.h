/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSMutableDictionary, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding> {
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNMaterialProperty *_background;
    id _fogColor;
    float _fogDensityExponent;
    float _fogEndDistance;
    float _fogStartDistance;
    double _lastEvalTime;
    struct __C3DLibrary { } *_library;
    BOOL _paused;
    SCNPhysicsWorld *_physicsWorld;
    id _reserved;
    SCNNode *_rootNode;
    struct __C3DScene { } *_scene;
    SCNSceneSource *_sceneSource;
    NSMutableDictionary *_userAttributes;
}

@property(readonly) SCNMaterialProperty * background;
@property(retain) id fogColor;
@property float fogDensityExponent;
@property float fogEndDistance;
@property float fogStartDistance;
@property(getter=isPaused) BOOL paused;
@property(readonly) SCNPhysicsWorld * physicsWorld;
@property(readonly) SCNNode * rootNode;

+ (id)SCNJSExportProtocol;
+ (SEL)jsConstructor;
+ (id)scene;
+ (id)sceneNamed:(id)arg1;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(int)arg2 options:(id)arg3;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithSceneRef:(struct __C3DScene { }*)arg1;
+ (id)sceneWithURL:(id)arg1 atIndex:(int)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (void*)__CFObject;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (id)_physicsWorldCreateIfNeeded:(BOOL)arg1;
- (void)_scaleSceneBy:(float)arg1;
- (id)_scenes;
- (void)_setRootNode:(id)arg1;
- (void)_syncObjCModel;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (id)attributeForKey:(id)arg1;
- (id)background;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)fogColor;
- (float)fogDensityExponent;
- (float)fogEndDistance;
- (float)fogStartDistance;
- (double)frameRate;
- (id)init;
- (id)initForJavascript:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneRef:(struct __C3DScene { }*)arg1;
- (BOOL)isPaused;
- (BOOL)isPausedOrPausedByInheritance;
- (double)lastEvalTime;
- (struct __C3DLibrary { }*)library;
- (void)lock;
- (id)particleSystems;
- (id)physicsWorld;
- (float)playbackSpeed;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (id)root;
- (id)rootNode;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (id)sceneSource;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFogColor:(id)arg1;
- (void)setFogDensityExponent:(float)arg1;
- (void)setFogEndDistance:(float)arg1;
- (void)setFogStartDistance:(float)arg1;
- (void)setFrameRate:(double)arg1;
- (void)setLastEvalTime:(double)arg1;
- (void)setLibrary:(struct __C3DLibrary { }*)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (void)setRootNode:(id)arg1;
- (void)setSceneSource:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUpAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (double)startTime;
- (void)unlock;
- (struct SCNVector3 { float x1; float x2; float x3; })upAxis;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(id)arg4;

@end
