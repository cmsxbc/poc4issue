 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree15(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.2815000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.66550000000000009);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)1.3365000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 22, (DAAL_DATA_TYPE)1.0605000000000002);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 22, (DAAL_DATA_TYPE)0.80150000000000021);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 0, (DAAL_DATA_TYPE)0.95250000000000001);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 5, (DAAL_DATA_TYPE)0.77950000000000019);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0093465663839218237);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0039569768453797984);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[6], 1, 1, (DAAL_DATA_TYPE)0.62150000000000005);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)0.010775719384352365);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0043782575641359602);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[5], 1, 4, (DAAL_DATA_TYPE)0.67450000000000021);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-0.004556898808913675);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)-0.011374356190144028);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[4], 1, 5, (DAAL_DATA_TYPE)1.1175000000000004);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)0.0040281527429013647);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)-0.009289980256879651);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0043310236806670824);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)0.96550000000000014);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 5, (DAAL_DATA_TYPE)0.81650000000000011);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 9, (DAAL_DATA_TYPE)1.2475000000000003);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 22, (DAAL_DATA_TYPE)0.97550000000000014);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 24, (DAAL_DATA_TYPE)0.98550000000000015);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 24, (DAAL_DATA_TYPE)0.64150000000000007);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.009147950374718869);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[25], 1, 16, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 27, (DAAL_DATA_TYPE)0.82050000000000012);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.002434182975251796);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.013454457474025815);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.010872942853618313);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.0051630066110278077);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[23], 1, 21, (DAAL_DATA_TYPE)1.0715000000000001);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 24, (DAAL_DATA_TYPE)1.1635000000000002);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.0096462182550117233);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0045985071033966254);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0036074577895707869);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.012171129368502519);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[21], 1, 27, (DAAL_DATA_TYPE)0.95050000000000001);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.0094788154642475725);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[39], 1, 0, (DAAL_DATA_TYPE)1.7805000000000002);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 3, (DAAL_DATA_TYPE)2.0310000000000001);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0060489187537620366);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0089626046518484753);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.0088359242135828183);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[20], 1, 5, (DAAL_DATA_TYPE)0.87650000000000017);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 9, (DAAL_DATA_TYPE)1.0415000000000003);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0071510115984073962);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.0030485746912334278);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[46], 1, 3, (DAAL_DATA_TYPE)1.7675000000000003);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 13, (DAAL_DATA_TYPE)1.3135000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 25, (DAAL_DATA_TYPE)1.0455000000000003);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.0063230767640574228);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0014425591016427066);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.010134056651073954);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0065612981784833619);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[1], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[57], 0, 22, (DAAL_DATA_TYPE)1.0325000000000002);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)-0.0073988432199193419);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.0018924965573028779);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.014002072919781009);

}