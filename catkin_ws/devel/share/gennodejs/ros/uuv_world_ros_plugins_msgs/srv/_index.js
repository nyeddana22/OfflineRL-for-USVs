
"use strict";

let SetCurrentModel = require('./SetCurrentModel.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')

module.exports = {
  SetCurrentModel: SetCurrentModel,
  SetCurrentVelocity: SetCurrentVelocity,
  GetCurrentModel: GetCurrentModel,
  TransformToSphericalCoord: TransformToSphericalCoord,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  SetCurrentDirection: SetCurrentDirection,
};
