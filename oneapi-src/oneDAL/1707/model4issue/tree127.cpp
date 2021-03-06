 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree127(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 4, (DAAL_DATA_TYPE)1.6505000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 4, (DAAL_DATA_TYPE)1.6155000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 24, (DAAL_DATA_TYPE)0.73550000000000015);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 21, (DAAL_DATA_TYPE)1.9665000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 25, (DAAL_DATA_TYPE)0.21150000000000002);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0066969095489808495);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 3, (DAAL_DATA_TYPE)1.7785000000000002);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 26, (DAAL_DATA_TYPE)1.1085000000000003);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 25, (DAAL_DATA_TYPE)0.69750000000000012);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 5, (DAAL_DATA_TYPE)1.1225000000000003);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 22, (DAAL_DATA_TYPE)0.68650000000000022);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.012640721672053996);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 9, (DAAL_DATA_TYPE)0.57350000000000001);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 13, (DAAL_DATA_TYPE)0.83650000000000013);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0041473657181043001);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0078412677720189096);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.005433855421449009);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[10], 1, 7, (DAAL_DATA_TYPE)0.076500000000000012);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)0.0043427912818808706);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.0064329613654597389);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[9], 1, 19, (DAAL_DATA_TYPE)-1.4444999999999999);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0080610779452730316);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 4, (DAAL_DATA_TYPE)-0.19149999999999998);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 26, (DAAL_DATA_TYPE)0.77650000000000008);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.0084880214044085103);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 18, (DAAL_DATA_TYPE)0.39150000000000007);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 14, (DAAL_DATA_TYPE)-0.38749999999999996);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0090894327560243644);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.00093863624993159817);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0046977284587367239);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[23], 1, 27, (DAAL_DATA_TYPE)0.83250000000000013);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 9, (DAAL_DATA_TYPE)1.0365000000000002);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 7, (DAAL_DATA_TYPE)0.62250000000000016);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.00084054030404302239);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 4, (DAAL_DATA_TYPE)0.31550000000000006);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.00048462277278304105);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.012349673437661138);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0071779948028345272);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0065658662213805927);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.0088577284788091976);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0051635573385283356);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0070588153583230452);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[3], 1, 26, (DAAL_DATA_TYPE)0.60750000000000004);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0084846719542595872);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[43], 1, 2, (DAAL_DATA_TYPE)1.7240000000000004);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 24, (DAAL_DATA_TYPE)1.0755000000000001);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.00075098023337741597);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.00056941124601006651);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.010626156625360074);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[2], 1, 21, (DAAL_DATA_TYPE)0.85550000000000004);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0028100964054465294);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.011227537178307434);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[1], 1, 0, (DAAL_DATA_TYPE)1.1495000000000002);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 7, (DAAL_DATA_TYPE)0.085500000000000007);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 2, (DAAL_DATA_TYPE)0.27900000000000008);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0032680964097380641);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0079932909786563228);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.010165048817672381);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[53], 1, 24, (DAAL_DATA_TYPE)0.93950000000000011);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0088265515537932528);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0045110350629935661);

}
