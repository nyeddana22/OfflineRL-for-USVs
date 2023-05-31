
"use strict";

let SetSMControllerParams = require('./SetSMControllerParams.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let SwitchToManual = require('./SwitchToManual.js')
let SetPIDParams = require('./SetPIDParams.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let GetPIDParams = require('./GetPIDParams.js')
let GoTo = require('./GoTo.js')
let ResetController = require('./ResetController.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let Hold = require('./Hold.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let GoToIncremental = require('./GoToIncremental.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let AddWaypoint = require('./AddWaypoint.js')
let StartTrajectory = require('./StartTrajectory.js')
let GetWaypoints = require('./GetWaypoints.js')

module.exports = {
  SetSMControllerParams: SetSMControllerParams,
  InitWaypointsFromFile: InitWaypointsFromFile,
  InitRectTrajectory: InitRectTrajectory,
  GetSMControllerParams: GetSMControllerParams,
  SetMBSMControllerParams: SetMBSMControllerParams,
  GetMBSMControllerParams: GetMBSMControllerParams,
  SwitchToManual: SwitchToManual,
  SetPIDParams: SetPIDParams,
  InitCircularTrajectory: InitCircularTrajectory,
  GetPIDParams: GetPIDParams,
  GoTo: GoTo,
  ResetController: ResetController,
  IsRunningTrajectory: IsRunningTrajectory,
  Hold: Hold,
  InitHelicalTrajectory: InitHelicalTrajectory,
  SwitchToAutomatic: SwitchToAutomatic,
  InitWaypointSet: InitWaypointSet,
  GoToIncremental: GoToIncremental,
  ClearWaypoints: ClearWaypoints,
  AddWaypoint: AddWaypoint,
  StartTrajectory: StartTrajectory,
  GetWaypoints: GetWaypoints,
};
