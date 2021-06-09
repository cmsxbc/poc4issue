 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree48(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)1.0895000000000004);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 13, (DAAL_DATA_TYPE)1.4385000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 24, (DAAL_DATA_TYPE)0.6585000000000002);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 3, (DAAL_DATA_TYPE)0.42050000000000004);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.0091040425214239159);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 19, (DAAL_DATA_TYPE)0.86650000000000016);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 21, (DAAL_DATA_TYPE)0.90350000000000008);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 6, (DAAL_DATA_TYPE)-1.0614999999999999);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.016481487788259985);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 6, (DAAL_DATA_TYPE)-0.34349999999999997);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.0094588599517010166);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 24, (DAAL_DATA_TYPE)0.60250000000000015);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-0.010218062098973836);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.0034270696614573642);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.0090417631124098275);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0068172431402448294);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[4], 1, 25, (DAAL_DATA_TYPE)0.98950000000000016);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 26, (DAAL_DATA_TYPE)1.1475000000000002);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 25, (DAAL_DATA_TYPE)0.76150000000000018);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 27, (DAAL_DATA_TYPE)0.85250000000000015);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 26, (DAAL_DATA_TYPE)0.66850000000000021);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 24, (DAAL_DATA_TYPE)0.71850000000000003);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.0031279534929328496);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.010941201751982724);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 0, (DAAL_DATA_TYPE)0.90350000000000008);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 13, (DAAL_DATA_TYPE)1.0065000000000002);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0042724388261508742);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.0057098340685084719);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[26], 1, 11, (DAAL_DATA_TYPE)-1.5004999999999997);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.0099188974215870807);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[30], 1, 18, (DAAL_DATA_TYPE)1.2545000000000002);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)0.0048572389651241341);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0090991359026659103);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[21], 1, 5, (DAAL_DATA_TYPE)0.47150000000000003);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.0074908756735649982);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.008362034343493481);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0014620653061252651);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.014142124309684291);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[18], 1, 21, (DAAL_DATA_TYPE)1.4365000000000003);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 6, (DAAL_DATA_TYPE)1.0845000000000002);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.0026265096785553464);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.012281200176073334);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.008714532672331252);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[3], 1, 23, (DAAL_DATA_TYPE)1.1125000000000003);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.0020990837492207265);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.012092103179366816);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.0034071806548847321);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[1], 1, 22, (DAAL_DATA_TYPE)1.0465000000000002);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 22, (DAAL_DATA_TYPE)0.74450000000000005);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 13, (DAAL_DATA_TYPE)0.6645000000000002);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0051111216760343983);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.0094218562834146556);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0042636238025113423);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[49], 1, 22, (DAAL_DATA_TYPE)1.0865000000000002);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 11, (DAAL_DATA_TYPE)-0.94399999999999984);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0033193560006717841);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.01461092063950168);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 6, (DAAL_DATA_TYPE)1.7735000000000001);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0014697986436445168);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0077865274380082674);

}