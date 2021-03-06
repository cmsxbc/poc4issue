 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree183(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 11, (DAAL_DATA_TYPE)-1.7314999999999998);
    builder.addLeafNode(treeId, nodeIds[1], 0, (DAAL_DATA_TYPE)-0.0077661011368036275);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[1], 1, 5, (DAAL_DATA_TYPE)1.6690000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 2, (DAAL_DATA_TYPE)0.32000000000000006);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 24, (DAAL_DATA_TYPE)1.5790000000000004);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 25, (DAAL_DATA_TYPE)1.2450000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 10, (DAAL_DATA_TYPE)-1.3474999999999999);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0024043774908834512);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[7], 1, 11, (DAAL_DATA_TYPE)-0.26949999999999996);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.0016715789698316037);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 7, (DAAL_DATA_TYPE)0.18900000000000003);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.00086094999099455699);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 1, (DAAL_DATA_TYPE)1.2045000000000001);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 9, (DAAL_DATA_TYPE)1.0325000000000002);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0015143850553036313);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0034424561413363853);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)-0.0080925784084963839);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[6], 1, 26, (DAAL_DATA_TYPE)1.1015000000000004);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 21, (DAAL_DATA_TYPE)1.0870000000000004);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 7, (DAAL_DATA_TYPE)1.1435000000000002);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.0061948641585941253);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[20], 1, 1, (DAAL_DATA_TYPE)0.22550000000000003);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0079009366753910269);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)-0.0059049284085631376);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.0036614310182631021);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[18], 1, 6, (DAAL_DATA_TYPE)-0.32249999999999995);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0034017688618656777);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 6, (DAAL_DATA_TYPE)0.29550000000000004);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.0072584326526052073);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.00029083502328938851);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[5], 1, 15, (DAAL_DATA_TYPE)0.13750000000000004);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 26, (DAAL_DATA_TYPE)1.3605000000000003);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)0.00027805717928068981);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 26, (DAAL_DATA_TYPE)1.5705000000000002);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.018396305199712516);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)0.0048396238161680788);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 24, (DAAL_DATA_TYPE)1.7065000000000003);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0051928527105380507);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0038295469719630023);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.00081074813146918539);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[3], 1, 4, (DAAL_DATA_TYPE)1.4005000000000003);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 13, (DAAL_DATA_TYPE)0.95150000000000012);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 22, (DAAL_DATA_TYPE)0.83350000000000002);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0082397332141529965);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[43], 1, 17, (DAAL_DATA_TYPE)0.88750000000000007);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 23, (DAAL_DATA_TYPE)0.99350000000000016);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0013949958233614311);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.010176003072410823);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.0038701461472858988);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[42], 1, 4, (DAAL_DATA_TYPE)0.93300000000000016);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 0, (DAAL_DATA_TYPE)1.9325000000000003);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 25, (DAAL_DATA_TYPE)1.0505000000000002);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 22, (DAAL_DATA_TYPE)1.7290000000000003);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.002935798960788816);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.0052028753561899066);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0066720019496808005);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.0024080634349957111);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[50], 1, 24, (DAAL_DATA_TYPE)1.1225000000000003);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.0028023744467645887);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.0073568820448902741);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.0076993875352567749);

}
